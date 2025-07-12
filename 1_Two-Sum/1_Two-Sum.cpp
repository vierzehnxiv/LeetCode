#ifndef TWO_SUM
#define TWO_SUM

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end())
            {
                return {hash[complement], i};
            }
            hash[nums[i]] = i;
        }
        return {}; 
    }
};
#endif // TWO_SUM