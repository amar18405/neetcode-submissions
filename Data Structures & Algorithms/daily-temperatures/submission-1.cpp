class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> ans(temperatures.size(), 0);
        for(int i = 0; i < temperatures.size(); i++){
            // if(st.empty() || temperatures[i] <= temperatures[st.top()]){
            //     st.push(i);
            // }
            // else{
                while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                    ans[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            // }
        }
        ans[st.top()] = 0;

    return ans;
    }
};
