#include <string>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) 
    {
        size_t cname = 0, ctyped = 0;
        while (cname < name.size() && ctyped < typed.size()) 
        {
            if (name[cname] == typed[ctyped]) 
            {
                cname++;
                ctyped++;
            } 
            else if (ctyped > 0 && typed[ctyped] == typed[ctyped - 1]) 
            {
                ctyped++;
            } 
            else 
            {
                return false;
            }
        }
        if (cname < name.size()) 
        {
            return false; // Not all characters in name were matched
        }
        while (ctyped < typed.size()) 
        {
            if (typed[ctyped] != typed[ctyped - 1]) 
            {
                return false; // Remaining characters in typed must match the last character
            }
            ctyped++;
        }
        return true;
    }
};