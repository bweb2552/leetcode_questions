/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp=head;int count=1;struct ListNode *kemp=head;
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        return head;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;count++;
        }
        if(count%2!=0){
            for(int i=2;i<=(count/2)+1;i++){
                kemp=kemp->next;
            }
            
            return kemp;
        }
        else{
            for(int i=2;i<=(count/2)+1;i++){
                kemp=kemp->next;
            }
            return kemp;
        }

    }
}