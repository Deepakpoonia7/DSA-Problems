#include <unordered_map>
#include <string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) { 
        if (s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char, int> ms, mt;
    
        for (int i = 0; i < s.length(); i++) {
            ms[s[i]]++;
            mt[t[i]]++;
        }
        
        return ms == mt;
    }
};