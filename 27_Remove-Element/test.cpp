#include <cassert>
#include <vector>
#include "27_Remove-Element.cpp"
using namespace std;


int main() {
    Solution solution;

    // Test Case 1: nums = [3,2,2,3], val = 3
    vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;
    int k1 = solution.removeElement(nums1, val1);
    assert(k1 == 2);
    vector<int> expected1 = {2, 2};
    for (int i = 0; i < k1; i++) {
        assert(nums1[i] == expected1[i]);
    }

    // Test Case 2: nums = [0,1,2,2,3,0,4,2], val = 2
    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int k2 = solution.removeElement(nums2, val2);
    assert(k2 == 5);
    vector<int> expected2 = {0, 1, 3, 0, 4};
    for (int i = 0; i < k2; i++) {
        bool found = false;
        for (int j = 0; j < expected2.size(); j++) {
            if (nums2[i] == expected2[j]) {
                found = true;
                break;
            }
        }
        assert(found);
    }

    // Test Case 3: Empty array
    vector<int> nums3 = {};
    int val3 = 1;
    int k3 = solution.removeElement(nums3, val3);
    assert(k3 == 0);

    return 0;
}