class myStack {
  public:
  int cap;
  vector<int>arr;
    myStack(int n) {
        cap =n;
        
    }

    bool isEmpty() {
        // check if the stack is empty
        return arr.empty();
    }

    bool isFull() {
        // check if the stack is ful
        return cap==arr.size();
    }

    void push(int x) {
        // inserts x at the top of the stack
        arr.push_back(x);
    }

    void pop() {
        // removes an element from the top of the stak
        if(!isEmpty()){
         arr.pop_back();
        }
    }

    int peek() {
        // Returns the top element of the stack
        if(isEmpty()) return -1;
        return arr.back();
    }
};