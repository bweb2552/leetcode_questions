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
class Solution {
    public boolean isPalindrome(ListNode head) {
        if (head == null){
            return true;
        }
        ListNode ptr=new ListNode(head.val);
        ListNode ptr1=ptr;
        ListNode temp=head.next;
        while(temp !=null){
            ptr=new ListNode(temp.val,ptr1);
            ptr1 = ptr;
            temp = temp.next;
        }
        temp=head;
        while(temp!=null){
            if(temp.val != ptr1.val){
                return false;
            }
            temp = temp.next;
            ptr1 = ptr1.next;
        }
        return true;
    }
}

