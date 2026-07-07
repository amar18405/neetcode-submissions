class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans(2);
        for(int i = 0; i < nums.size(); i++){
            if(mp.contains(nums[i])){
                ans[0] = mp[nums[i]];
                ans[1] = i;
                return ans; 
            }
            mp[target-nums[i]] = i;
        }
        return ans;
    }
};
