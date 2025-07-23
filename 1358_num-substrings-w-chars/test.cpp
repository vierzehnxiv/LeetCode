#include <cassert>

#include "1358_num-substrings.cpp"

int main() {
    Solution solution;

    // Test Case 1: s = "abcabc"
    assert(solution.numberOfSubstrings("abcabc") == 10);

    // Test Case 2: s = "aaacb"
    assert(solution.numberOfSubstrings("aaacb") == 3);

    // Test Case 3: s = "abc"
    assert(solution.numberOfSubstrings("abc") == 1);

    // Additional Test Case 4: s = "aabbcc"
    assert(solution.numberOfSubstrings("aabbcc") == 4);

    // Additional Test Case 5: s = "aaa"
    assert(solution.numberOfSubstrings("aaa") == 0);

    // Additional Test Case 6: s = "abcaabbcc"
    assert(solution.numberOfSubstrings("abcaabbcc") == 21);

    return 0;
}
