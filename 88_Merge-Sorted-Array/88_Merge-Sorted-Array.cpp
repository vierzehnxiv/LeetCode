#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        vector<int> sol;
        int count_m = 0;
        int count_n = 0;
        if (m == 0)
        {
            nums1 = nums2;
            return;
        }
        if (n == 0)
            return;
        while (count_m < m || count_n < n)
        {
            if (count_m >= m)
            {
                sol.push_back(nums2[count_n]);
                count_n++;
            }
            else if (count_n >= n)
            {
                sol.push_back(nums1[count_m]);
                count_m++;
            }
            else if (nums1[count_m] <= nums2[count_n])
            {
                sol.push_back(nums1[count_m]);
                count_m++;
            }
            else
            {
                sol.push_back(nums2[count_n]);
                count_n++;
            }
        }
        nums1 = sol;
    }

    void mergeOptimal(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        // in place, from back to front for better space complexity
        int i = m - 1; // last index of nums1's valid elements
        int j = n - 1; // last index of nums2
        int k = m + n - 1; // last index of nums1

        while (j >= 0)
        {
            if (i >= 0 && nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
    }
};