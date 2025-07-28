#include <vector>
using std::vector;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int max = 0;
        size_t m = accounts.size();
        for (size_t i = 0; i < m; ++i)
        {
            int wealth = 0;
            size_t n = accounts[i].size();
            for (size_t j = 0; j < n; ++j)
            {
                wealth += accounts.at(i).at(j);
            }
            max = std::max(max, wealth);
            //max = wealth > max ? wealth : max;
        }
        return max;
    }
};