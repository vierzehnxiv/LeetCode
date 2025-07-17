#include "925_Long-Pressed-Name.cpp"
#include <cassert>

int main() {
    Solution solution;

    // Test Case 1: name = "alex", typed = "aalleexx"
    assert(solution.isLongPressedName("alex", "aalleexx") == true);

    // Test Case 2: name = "saeed", typed = "ssaaedd"
    assert(solution.isLongPressedName("saeed", "ssaaedd") == false);

    // Test Case 3: name = "leelee", typed = "lleeelee"
    assert(solution.isLongPressedName("leelee", "lleeelee") == true);

    // Test Case 4: name = "laiden", typed = "laiden"
    assert(solution.isLongPressedName("laiden", "laiden") == true);

    // Additional Test Case 5: Empty name
    assert(solution.isLongPressedName("", "") == true);

    // Additional Test Case 6: Single character with long press
    assert(solution.isLongPressedName("a", "aaaa") == true);

    // Additional Test Case 7: Mismatch in characters
    assert(solution.isLongPressedName("alex", "ale") == false);

    // Additional Test Case 8: Wrong order
    assert(solution.isLongPressedName("alex", "aaleexa") == false);

    return 0;
}