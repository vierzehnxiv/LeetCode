#include <cassert>

#include "1358_num-substrings.cpp"

int main() {
    Solution solution;

    // Test Case 1: s = "abcabc"
    assert(solution.numberOfSubstringsBest("abcabc") == 10);

    // Test Case 2: s = "aaacb"
    assert(solution.numberOfSubstringsBest("aaacb") == 3);

    // Test Case 3: s = "abc"
    assert(solution.numberOfSubstringsBest("abc") == 1);

    // Additional Test Case 4: s = "aabbcc"
    assert(solution.numberOfSubstringsBest("aabbcc") == 4);

    // Additional Test Case 5: s = "aaa"
    assert(solution.numberOfSubstringsBest("aaa") == 0);

    // Additional Test Case 6: s = "abcaabbcc"
    assert(solution.numberOfSubstringsBest("abcaabbcc") == 21);

    return 0;
}
