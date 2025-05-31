class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node *prev=NULL,*curr=head,*next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};