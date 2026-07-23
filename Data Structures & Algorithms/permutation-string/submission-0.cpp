class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1 == s2) return true;
        if(s1.size() > s2.size()) return false;
        unordered_map<char,int> mp;
        for(int i = 0; i < s1.size(); i++){
            mp[s1[i]]++;
        }
        unordered_map<char,int> mp2;
        int left = 0;
        for(int i = 0; i < s1.size(); i++){
            mp2[s2[i]]++;
            if(mp == mp2) return true;
        }
        if(s1.size() == s2.size()) return false;
        for(int i = s1.size(); i < s2.size(); i++){
            mp2[s2[left]]--;
            if(mp2[s2[left]] == 0){
                mp2.erase(s2[left]);
            }
            mp2[s2[i]]++;
            left++;
            if(mp == mp2) return true;
        }
        return false;
    }
};
