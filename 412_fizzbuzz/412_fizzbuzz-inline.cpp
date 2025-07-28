#include <vector>
#include <string>
using std::vector;
using std::string;
using std::to_string;

class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> answer(n);
        for (int i = 1; i <= n; ++i) 
        {
            int code;
            // Inline assembly to determine FizzBuzz code
            asm volatile 
            (
                // Input: i in %0
                // Output: code in %1
                // Clobber: eax, ebx, edx, memory
                "movl %0, %%eax\n\t"          // Copy i to eax (32-bit)
                "xorl %%edx, %%edx\n\t"       // Clear edx for division
                "movl $3, %%ebx\n\t"          // Set divisor to 3
                "divl %%ebx\n\t"              // eax = i / 3, edx = i % 3
                "testl %%edx, %%edx\n\t"      // Check remainder
                "jnz not_fizzbuzz_%=\n\t"     // Jump if i % 3 != 0

                "movl %0, %%eax\n\t"          // Copy i to eax again
                "xorl %%edx, %%edx\n\t"       // Clear edx
                "movl $5, %%ebx\n\t"          // Set divisor to 5
                "divl %%ebx\n\t"              // eax = i / 5, edx = i % 5
                "testl %%edx, %%edx\n\t"      // Check remainder
                "jnz not_fizzbuzz_%=\n\t"     // Jump if i % 5 != 0

                "movl $0, %1\n\t"             // Code 0 for FizzBuzz
                "jmp end_%=\n\t"

                "not_fizzbuzz_%=:\n\t"
                "movl %0, %%eax\n\t"          // Copy i to eax
                "xorl %%edx, %%edx\n\t"       // Clear edx
                "movl $3, %%ebx\n\t"          // Set divisor to 3
                "divl %%ebx\n\t"              // eax = i / 3, edx = i % 3
                "testl %%edx, %%edx\n\t"      // Check remainder
                "jnz not_fizz_%=\n\t"

                "movl $1, %1\n\t"             // Code 1 for Fizz
                "jmp end_%=\n\t"

                "not_fizz_%=:\n\t"
                "movl %0, %%eax\n\t"          // Copy i to eax
                "xorl %%edx, %%edx\n\t"       // Clear edx
                "movl $5, %%ebx\n\t"          // Set divisor to 5
                "divl %%ebx\n\t"              // eax = i / 5, edx = i % 5
                "testl %%edx, %%edx\n\t"      // Check remainder
                "jnz not_buzz_%=\n\t"

                "movl $2, %1\n\t"             // Code 2 for Buzz
                "jmp end_%=\n\t"

                "not_buzz_%=:\n\t"
                "movl $3, %1\n\t"             // Code 3 for number as string

                "end_%=:\n\t"
                : "=r" (code)                 // Output: code (int)
                : "r" ((unsigned int)i)       // Input: i (cast to unsigned int)
                : "eax", "ebx", "edx", "memory" // Clobbered registers and memory
            );

            // Assign string based on code
            switch (code) 
            {
                case 0:
                    answer[i-1] = "FizzBuzz";
                    break;
                case 1:
                    answer[i-1] = "Fizz";
                    break;
                case 2:
                    answer[i-1] = "Buzz";
                    break;
                case 3:
                    answer[i-1] = to_string(i);
                    break;
            }
        }
        return answer;
    }
};
