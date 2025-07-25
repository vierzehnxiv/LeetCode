#include <cassert>
#include <string>

#include "13_roman-to-int.cpp"


int main() {
    Solution solution;

    // Test Case 1: s = "III"
    assert(solution.romanToInt("III") == 3);

    // Test Case 2: s = "IV"
    assert(solution.romanToInt("IV") == 4);

    // Test Case 3: s = "IX"
    assert(solution.romanToInt("IX") == 9);

    // Test Case 4: s = "LVIII"
    assert(solution.romanToInt("LVIII") == 58);

    // Test Case 5: s = "MCMXCIV"
    assert(solution.romanToInt("MCMXCIV") == 1994);

    // Additional Test Case 6: s = "I"
    assert(solution.romanToInt("I") == 1);

    // Additional Test Case 7: s = "MMMCMXCIX"
    assert(solution.romanToInt("MMMCMXCIX") == 3999);

    // Additional Test Case 8: s = "CDXLIV"
    assert(solution.romanToInt("CDXLIV") == 444);

    return 0;
}
