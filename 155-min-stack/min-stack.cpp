class MinStack {
    stack<int> mainStack;
    stack<int> minStack;

public:
    MinStack() {}

    void push(int val) {
        mainStack.push(val);

        if (minStack.empty()) {
            minStack.push(val);
        } else {
            // minStack.push(min(val, minStack.top()));
            int currentMin = min(val , minStack.top());
            minStack.push(currentMin);
        }
    }

    void pop() {
        if (!mainStack.empty()) {
            mainStack.pop();
            minStack.pop();
        }
    }

    int top() { return mainStack.top(); }

    int getMin() { return minStack.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */