/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode sortedListToBST(ListNode head) {
        //Trường hợp bắt buộc nếu ko mún lặp vô tận: list rỗng -> không có node nào -> return null
        if (head == null) {
            return null;
        }

        //Trường hợp bắt buộc nếu ko mún lặp vô tận: chỉ còn 1 node -> chính nó là leaf node
        if (head.next == null) {
            return new TreeNode(head.val);
        }

        // "prev" dùng để cắt list sau khi tìm được mid
        ListNode prev = null;
        ListNode slow = head; // đi 1 bước mỗi lần
        ListNode fast = head; // đi 2 bước mỗi lần

        // Khi fast đến cuối, slow đang ở giữa
        while (fast != null && fast.next != null) {
            prev = slow;
            slow = slow.next; // tiến 1 bước
            fast = fast.next.next; // tiến 2 bước
        }
        // Sau vòng lặp: slow = node giữa (sẽ làm root)

        //Cắt mối liên kết giữa nửa trái và node giữa
        prev.next = null;

        // Tạo root từ node giữa
        TreeNode root = new TreeNode(slow.val);

        // Đệ quy cho 2 nửa
        root.left = sortedListToBST(head);         //nửa trái
        root.right = sortedListToBST(slow.next);   //nửa phải

        return root;
    }
}