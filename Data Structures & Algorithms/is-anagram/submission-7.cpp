class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int c[26] = {};

        for(auto i : s) c[i - 'a']++;

        for(auto i : t)
        {
            if(--c[i - 'a'] < 0) return false;
        }
        return true;
    }
};