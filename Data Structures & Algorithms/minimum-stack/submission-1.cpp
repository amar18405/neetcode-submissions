class MinStack {
public:

    stack<int> st;
    stack<int> miniSt;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(miniSt.empty() || val <= miniSt.top()){
            miniSt.push(val);
        }
    }
    
    void pop() {
        if(miniSt.top() == st.top()){
            miniSt.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return miniSt.top();
    }
};
