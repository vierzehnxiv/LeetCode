#include <iostream>
#include <vector>
#include "1_Two-Sum.cpp"

using namespace std;

void runTest(vector<int> nums, int target, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    cout << "Input: nums = [";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ", ";
    }
    cout << "], target = " << target << endl;

    cout << "Expected Output: [" << expected[0] << ", " << expected[1] << "]" << endl;
    cout << "Your Output: [" << result[0] << ", " << result[1] << "]" << endl;

    cout << (result == expected ? "Test passed" : "Test failed") << endl << endl;
}

int main() {
    runTest({2, 7, 11, 15}, 9, {0, 1});
    runTest({3, 2, 4}, 6, {1, 2});
    runTest({3, 3}, 6, {0, 1});
    return 0;
}
