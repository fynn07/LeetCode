#include <limits.h>
class MinStack {
    vector<int> stack;
    vector<int> minimum;
public:
    MinStack() {
        stack;
        minimum = {INT_MAX};
    }
    
    void push(int val) {
        stack.push_back(val);
        if (val <= minimum.back()){
          minimum.push_back(val);
        }
    }
    
    void pop() {
        if (stack.back() == minimum.back()){
          minimum.pop_back();
        }
        stack.pop_back();

    }
    
    int top() {
        int i = stack.back();
        return i;
    }
    
    int getMin() {
        int i = minimum.back();
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