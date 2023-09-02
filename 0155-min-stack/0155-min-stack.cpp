class MinStack {
    vector<int> stack;
public:
    MinStack() {
        stack;
    }
    
    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        int i = stack.back();
        return i;
    }
    
    int getMin() {
        int i = *min_element(stack.begin(), stack.end());
        return i;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */