#include <string>
#include <unordered_map>

using std::string;
using std::unordered_map;

class Solution {
public:
    int char2num(char a) {
        switch (a) {
            case 'I': return 1; break;
            case 'V': return 5; break;
            case 'X': return 10; break;
            case 'L': return 50; break;
            case 'C': return 100; break;
            case 'D': return 500; break;
            case 'M': return 1000; break;
            default: return 0;
        }
    }

    int romanToInt(string s) 
    {
        int result = 0;
        for (size_t i = 0; i < s.size(); i++) 
        {
            if (i + 1 < s.size() && char2num(s[i]) < char2num(s[i + 1]))
                result -= char2num(s[i]);
            else
                result += char2num(s[i]);
        }
        return result;
    }

    int romanToIntMap(string s) 
    {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int result = 0;

        for (size_t i = 0; i < s.size(); i++)
        {
            int current = romanMap.at(s.at(i));
            int next = (i+1 < s.size()) ? romanMap.at(s.at(i+1)) : 0;

            if (current < next)
                result -= current;
            else
                result += current;
        }

        return result;
    }
};