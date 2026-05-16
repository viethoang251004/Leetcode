class MyStack {

    private Queue<Integer> queue;

    public MyStack() {
        queue = new LinkedList<>();
    }
    
    public void push(int x) {
        queue.add(x); // thêm x vào cuối
        // xoay tất cả phần tử TRƯỚC x ra SAU x giống việc xếp hàng mua đồ ở canteen
        int size = queue.size();
        for (int i = 0; i < size - 1; i++) {
            // add() thêm phần tử mới vào cuối hàng chờ, xoay vòng element cũ ra sau x,
            // sau đó poll() là lấy và loại bỏ
            // phần tử đầu tiên (là phần tử mới thêm vào và đưa lên đầu) trong queue
            // nếu queue rỗng, poll() sẽ trả về null
            // (khác với remove(), vốn sẽ ném NoSuchElementException nếu queue rỗng)
            queue.add(queue.poll());
        }
    }
    
    public int pop() {
        // Nếu queue rỗng, poll() sẽ trả về null
        // (khác với remove(), vốn sẽ ném NoSuchElementException nếu queue rỗng)
        return queue.poll(); // method poll() vừa trả về vừa xóa phần tử đầu
    }
    
    public int top() {
        // Nếu queue rỗng, peek() sẽ trả về null (khác với element(), 
        // vốn sẽ ném NoSuchElementException nếu queue rỗng)
        return queue.peek(); //trả về phần tử đầu trong queue đối peek(), khác với poll() là nó không xóa phần tử đó.
    }
    
    public boolean empty() {
        return queue.isEmpty(); //isEmpty() kiểm tra xem stack có rỗng hay không
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */