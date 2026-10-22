class MyQueue {
public:
    stack<int> a;
    stack<int> b;

    MyQueue() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        while(!a.empty()){
            int i = a.top();
            a.pop();
            b.push(i);
        }
        int p = b.top();
        b.pop();

        // must restore stack a or next operations order will be disturbed
        while(!b.empty()){
            int j = b.top();
            b.pop();
            a.push(j);
        }
        return p;
    }
    
    int peek() {
        while(!a.empty()){
            int i = a.top();
            b.push(i);
            a.pop();
        }
        int p = b.top();
        while(!b.empty()){
            int j = b.top();
            b.pop();
            a.push(j);
        }
        return p;
    }
    
    bool empty() {
        return a.empty() && b.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */