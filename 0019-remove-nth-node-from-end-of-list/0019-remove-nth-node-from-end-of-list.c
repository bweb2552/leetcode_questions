/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int count(struct ListNode* head){
    struct ListNode* ptr=head;int c=0;
    if(head==NULL){
        return 0;
    }
    else{
        while(ptr!=NULL){
            c++;
            ptr=ptr->next;

        }

    }
    return c;
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *ptr,*ptr1;
    if(head==NULL){
        return NULL;
    }
    
    ptr=ptr1=head;
    int C=count(head);
    int p=C-n;
    if(p==0){
        struct ListNode* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    for(int i=1;i<p;i++){
        ptr=ptr1;
        ptr1=ptr1->next;
    }
    ptr=ptr1;
    ptr1=ptr1->next;
    ptr->next=ptr1->next;
    free(ptr1);
    return head;

    
}