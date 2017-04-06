class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> all_stk;
    stack<int> min_stk;
    
    void push(int x) {
        all_stk.push(x);
        if(min_stk.empty() || min_stk.top() >= x){
            min_stk.push(x);
        }
    }
    void pop() {
        if(all_stk.top() == min_stk.top()){
            min_stk.pop();
        }
        all_stk.pop();
    }
    
    int top() {
        if(all_stk.empty()){
            return 0;
        }
        else{
            return all_stk.top();
        }
    }
    
    int getMin() {
        if(min_stk.empty()){
            return 0;
        }
        else{
            return min_stk.top();
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */