class Solution {
public:
    bool isAnagram(string s, string t) {
       std::unordered_map<char, int> m;
       for(auto ch : s) m[ch]++;

        for(auto& [ch, count] : m)
        {
            std::cout << ch << ":" << count << std::endl;
        }
       for(auto cht : t)
       {
            if(m.contains(cht)) m[cht]++;
            else return false;
       }
       std::cout << "++++++\n";
       for(auto& [ch, count] : m)
        {
            std::cout << ch << ":" << count << std::endl;
        }
       for(auto c : s)
       {
            if(m[c] % 2 != 0) return false;
       }    
       return true;

}
};
