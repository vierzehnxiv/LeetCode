#include "1342_reduce-num-to-0.cpp"
#include <cassert>

int main() {
    Solution solution;

    // Test Case 1: num = 14
    assert(solution.numberOfSteps(14) == 6);

    // Test Case 2: num = 8
    assert(solution.numberOfSteps(8) == 4);

    // Test Case 3: num = 123
    assert(solution.numberOfSteps(123) == 12);

    // Additional Test Case 4: num = 0
    assert(solution.numberOfSteps(0) == 0);

    // Additional Test Case 5: num = 1
    assert(solution.numberOfSteps(1) == 1);

    // Additional Test Case 6: num = 1000000
    assert(solution.numberOfSteps(1000000) == 26);

    return 0;
}