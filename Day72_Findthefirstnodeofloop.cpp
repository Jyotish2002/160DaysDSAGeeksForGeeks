class Solution {
  public:
    Node* findFirstNode(Node* head) {
        // your code here
        Node *slow=head,*fast=head;
        while(fast && fast->next){
            if((slow=slow->next)==(fast=fast->next->next)){
                for(slow=head;slow!=fast;slow=slow=slow->next,fast=fast->next);
                return slow;
            }
        }
        return nullptr;
    }
};