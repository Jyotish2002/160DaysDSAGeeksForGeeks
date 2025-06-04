class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        Node *slow=head, *fast=head;
        while(fast && fast->next){
            if((slow=slow->next)==(fast=fast->next->next))
            return true;
        }
        return false;
    }
};