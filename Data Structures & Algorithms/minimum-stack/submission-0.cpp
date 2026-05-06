class MinStack {
    stack<long long> st;
    stack<long long> minst;
public:
    MinStack() {}
    
    void push(int val) {
        if(minst.empty() || val <= minst.top()) {
            minst.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(minst.top() == st.top()) {
            minst.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
