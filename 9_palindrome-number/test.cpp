#include <cassert>
#include "9_palindrome-num.cpp"
using namespace std;

int main() {
    Solution solution;

    // Test Case 1: x = 121
    assert(solution.isPalindrome(121) == true);

    // Test Case 2: x = -121
    assert(solution.isPalindrome(-121) == false);

    // Test Case 3: x = 10
    assert(solution.isPalindrome(10) == false);

    // Additional Test Case 4: x = 0
    assert(solution.isPalindrome(0) == true);

    // Additional Test Case 5: x = 12321
    assert(solution.isPalindrome(12321) == true);

    // Additional Test Case 6: x = 12345
    assert(solution.isPalindrome(12345) == false);

    // Additional Test Case 7: x = 2147483647 (max int)
    assert(solution.isPalindrome(2147483647) == false);

    // Additional Test Case 8: x = -2147483648 (min int)
    assert(solution.isPalindrome(-2147483648) == false);

    return 0;
}