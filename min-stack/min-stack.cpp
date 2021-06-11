class MinStack {
public:
    /** initialize your data structure here. */
    vector<int>min;
    vector<int>a;
    MinStack() {
        min.push_back(2147483647);    
    }
    
    void push(int val) {
        a.push_back(val);
        if(val<min.back()){
            min.push_back(val);
        }
        else{
            min.push_back(min.back());
        }
    }
    
    void pop() {
        a.pop_back();
        min.pop_back();
    }
    
    int top() {
        return a.back();
    }
    
    int getMin() {
        return min.back();
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