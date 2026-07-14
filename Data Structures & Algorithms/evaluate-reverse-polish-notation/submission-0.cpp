class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string &a : tokens){
            if(a == "+" || a == "-" || a == "*" || a == "/" ){
                int q = st.top(); st.pop();
                int w = st.top(); st.pop();
                if(a == "+") st.push(q + w);
                if(a == "*") st.push(q * w);
                if(a == "-") st.push(w - q);
                if(a == "/") st.push(w / q);
            }
            else{
                st.push(stoi(a));
            }
        }
        return st.top();
    }
};
