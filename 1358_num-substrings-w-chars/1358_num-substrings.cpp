#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using std::string;
using std::vector;
using std::unordered_map;
using std::min;


class Solution {
public:
    int numberOfSubstringsBest(string s) {
        int len = s.length();
        // Track last position of a, b, c
        vector<int> lastPos = {-1, -1, -1};
        int total = 0;

        for (int pos = 0; pos < len; pos++) {
            // Update last position of current character
            lastPos[s[pos] - 'a'] = pos;

            // Add count of valid substrings ending at current position
            // If any character is missing, min will be -1
            // Else min gives leftmost required character position
            total += 1 + min({lastPos[0], lastPos[1], lastPos[2]});
        }

        return total;
    }

    int numberOfSubstrings(string s) 
    {
        int left = 0, right = 0;
        int count = 0, n = s.size();
        if (n < 3) return 0;

        vector<int> charCount(3, 0);

        while (right < n) 
        {
            charCount[s[right] - 'a']++;

            while (charCount.at(0) > 0 && charCount.at(1) > 0 && charCount.at(2) > 0)
            {
                count += n - right; // Count substrings for continuous window extending to the end
                charCount[s[left] - 'a']--; // Decrease count of the leftmost character
                left++; // Move window to the right
            }
            right++;
        }
        return count;
    }

    int numberOfSubstringsSlow(string s) 
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