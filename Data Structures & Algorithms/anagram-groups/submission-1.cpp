class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string a : strs){
            string key = a;
            sort(key.begin(), key.end());
            mp[key].emplace_back(a);
        }

        vector<vector<string>> ans;

        for(auto &it : mp){
            ans.emplace_back(it.second);
        }
        return ans;
    }
};
