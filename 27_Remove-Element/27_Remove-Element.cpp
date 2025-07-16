#include <vector>
using namespace std;

class Solution {
public:

    int removeElement(vector<int>& nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                ++k;
            }
        }
        return k;
    }

    int removeElementErase(vector<int>& nums, int val)
    {
        int k = 0;
        auto iter = nums.begin();
        while (iter != nums.end())
        {
            if (*iter == val)
            {
                iter = nums.erase(iter);
            }
            else
            {
                ++iter;
                ++k;
            }
        }
        return k;
    }
};