/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *f=head;struct ListNode *s=head;
    if(head==NULL){
        return false;
    }
    else if(head->next==NULL){
        return false;
    }
    else{
        while(f!=NULL && f->next!=NULL){
            s=s->next;f=f->next->next;
            if(f==s){
                return true;
            }
        }
    }
    return false;
}