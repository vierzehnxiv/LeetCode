#include <vector>
using std::vector;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> result(nums.size());
        result.at(0) = nums.at(0);
        for (size_t i = 1; i < nums.size(); ++i)
        {
            result.at(i) = result.at(i - 1) + nums.at(i);
        }
        return result;
    }
};