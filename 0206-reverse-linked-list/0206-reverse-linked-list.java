/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }//parameterized
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        if (head == null){
            return null;
        }
        ListNode ptr=new ListNode(head.val);
        ListNode ptr1=ptr;
        ListNode temp=head.next;
        while(temp !=null){
            ptr=new ListNode(temp.val,ptr1);
            ptr1 = ptr;
            temp = temp.next;
        }
        return ptr;
    }
}