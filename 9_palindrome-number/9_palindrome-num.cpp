#include <string>
using namespace std;

class Solution {
public:
    bool isPalindromeString(int x) 
    {
        // Negative numbers are not palindromes
        if (x < 0) return false;
        // Single digit numbers are always palindromes
        if (x < 10) return true;

        string str = to_string(x);
        size_t l = 0, r = str.length() - 1;
        while (l <= r)
        {
            if (str[l] != str[r])
                return false;
            ++l;
            --r;
        }
        return true;
    }

    bool isPalindrome(int x) 
    {
        long reversed = 0;
        int original = x;

        while (x > 0) 
        {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        return reversed == original;
    }
};