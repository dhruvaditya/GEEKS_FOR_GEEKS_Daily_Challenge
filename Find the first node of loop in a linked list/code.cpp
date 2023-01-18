class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        Node *fast=head;
        Node *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow= slow->next;
            if(fast==slow){
                break;
            }
        }
        if(fast==NULL || fast->next==NULL){
            return -1;
        }
        Node *temp=head;
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }
        return temp->data;
    }
};
