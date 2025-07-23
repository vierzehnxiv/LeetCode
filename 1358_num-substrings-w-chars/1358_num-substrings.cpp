#include <string>
#include <unordered_map>

using std::string;
using std::unordered_map;

class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        int left = 0, right = 2;
        int count = 0, n = s.size();
        if (n < 3) return 0;
        unordered_map<char, int> charCount;
        charCount[s[0] - 'a']++;
        charCount[s[1] - 'a']++;
        charCount[s[2] - 'a']++;

        while (right < n) 
        {
            if (charCount.size() == 3) 
            {
                count += n - right; // Count substrings for continuous window extending to the end
                charCount[s[left] - 'a']--; // Decrease count of the leftmost character
                if (charCount[s[left] - 'a'] == 0) 
                {
                    charCount.erase(s[left] - 'a'); // Remove character if its count is zero
                }
                left++; // Move window to the right
            } else // If we don't have all three characters, expand the window
            {
                right++;
                if (right < n) 
                {
                    charCount[s[right] - 'a']++;
                }
            }
        }
        return count;
    }
};