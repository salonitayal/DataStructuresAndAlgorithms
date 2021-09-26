class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    int x = INT_MAX;
    MinStack() {
     
    }
    
    void push(int val) {
        if(val < x)x=val;
        s.push(val);
        s.push(x);
    }
    
    void pop() {
        s.pop(); //pops min element
        s.pop(); //pops topmost elemet
        if(!s.empty())
        {
            x = s.top();
        }
        else x = INT_MAX;
    }
    
    int top() {
        x = s.top();
        s.pop();         //pops min element
        int res = s.top();
        s.push(x);      //to still hold min value at the top
        return res;
    }
    
    int getMin() {
        return s.top();
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