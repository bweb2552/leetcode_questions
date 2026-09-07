/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp=head;struct ListNode *kemp=head;
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        return head;
    }
    else{
        while(kemp!=NULL && kemp->next!=NULL){
            temp=temp->next;
            kemp=kemp->next->next;
        }
        return temp;

    }
}