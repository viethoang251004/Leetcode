class MyQueue {
    private Stack<Integer> inputStack;
    private Stack<Integer> outputStack;

    public MyQueue() {
        inputStack = new Stack<>();
        outputStack = new Stack<>();
    }
    
    // Đẩy phần tử vào stack đầu vào
    public void push(int x) {
        inputStack.push(x);
    }

    // Xóa và trả về phần tử phía trước
    public int pop() {
        peek(); //Đảm bảo ouputStack đã sẵn sàng dữ liệu
        return outputStack.pop();
        // return 1;
    }
    
    // Xem phần tử phía trước
    public int peek() {
        if (outputStack.isEmpty()) {
            while (!inputStack.isEmpty()) {
                outputStack.push(inputStack.pop());
            }
        }
        return outputStack.peek();
    }
    
    public boolean empty() {
        return inputStack.isEmpty() && outputStack.isEmpty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */