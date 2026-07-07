class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> abc;

        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];

            if(abc.count(need)){
                return{abc[need],i};
            } 

            abc[nums[i]] = i;
        }
        return {0,0};
    }
};
