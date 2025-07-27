#include <cassert>
#include <iostream>
#include "1480_running-sum-1d.cpp"

int main() {
    Solution solution;

    // Test Case 1: nums = [1,2,3,4]
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> expected1 = {1, 3, 6, 10};
    assert(solution.runningSum(nums1) == expected1);

    // Test Case 2: nums = [1,1,1,1,1]
    vector<int> nums2 = {1, 1, 1, 1, 1};
    vector<int> expected2 = {1, 2, 3, 4, 5};
    assert(solution.runningSum(nums2) == expected2);

    // Test Case 3: nums = [3,1,2,10,1]
    vector<int> nums3 = {3, 1, 2, 10, 1};
    vector<int> expected3 = {3, 4, 6, 16, 17};
    assert(solution.runningSum(nums3) == expected3);

    // Additional Test Case 4: nums = [1]
    vector<int> nums4 = {1};
    vector<int> expected4 = {1};
    assert(solution.runningSum(nums4) == expected4);

    // Additional Test Case 5: nums = [-1,-2,-3]
    vector<int> nums5 = {-1, -2, -3};
    vector<int> expected5 = {-1, -3, -6};
    assert(solution.runningSum(nums5) == expected5);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}
