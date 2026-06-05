class Solution {
    public String makeGood(String s) {
        Stack<Character> stack = new Stack<>();
        
        for (char c : s.toCharArray()) {
            if (!stack.isEmpty() && Math.abs(c - stack.peek()) == 32) {
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        
        StringBuffer result = new StringBuffer();
        // while (!stack.isEmpty()) {
        //     result.insert(0, stack.pop());
        // }
        
        // return result.toString();

        while (!stack.isEmpty()) {
            result.append(stack.pop());
        }
        // Vì stack là LIFO nên chuỗi bị đảo ngược,
        //ta gọi reverse() để đảo lại đúng thứ tự
        result.reverse();
        return result.toString();
    }
}