class MinStack {
public:
    MinStack() {
    }
     stack<int> st;
     stack<int> ss;
    
    void push(int value) {
        if(ss.empty()){
            ss.push(value);
        }
        else if(ss.top()>=value){
            ss.push(value);
        }
        st.push(value);
    }
    
    void pop() {
        if(st.empty()) return;
        if(st.top()==ss.top()){
         ss.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return ss.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */