class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;
        for(int i = 0; i < piles.size(); i++){
            if(piles[i] > max){
                max = piles[i];
            }
        }
        int low = 1;
        int high = max;
        int res = max;
        while(low <= high){
            int mid = (low + high)/2;
            int hour = 0;
            for(int i = 0; i < piles.size(); i++){
                hour += (piles[i] + mid - 1)/mid;
            }
            if(hour <= h){
                res = mid;
                high = mid -1;
            }
            else {
                low = mid + 1;
            }
        }
        return res;
    }
};
