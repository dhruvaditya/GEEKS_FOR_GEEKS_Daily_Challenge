class Solution{ 
public:
    void reorderList(Node* head) {
        // base condition for a list containing 1 or 2 nodes
        if(head->next==NULL || head->next->next==NULL)
        return ;
        
        Node * slow=head, *fast=head;
        
        // Fast and slow pointer to find mid of the list
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
    // if no of nodes are even then this is required to get the 
   correct node
        // as mid node
  if(fast->next!=NULL)
  {
  slow=slow->next;
  fast=fast->next;
      
  }      
        
        // reversing the half linked list
        if(slow->next!=NULL)
        fast=slow->next;
        slow->next=NULL;
        while(1)
        {
            
          if(fast->next==NULL)
          {
              fast->next=slow;
              break;
          }
          else
          {
              Node*temp=fast->next;
              fast->next=slow;
              slow=fast;
              fast=temp;
          }
            
        }
        
        //Final adjusments in the list.
        slow=head;
        // 2 additional pointers for manipulation
        Node *temp1, *temp2;
        while(fast->next!=NULL)
        {
            temp1=slow->next;
            slow->next=fast;
            temp2=fast->next;
            fast->next=temp1;
            slow=temp1;
            fast=temp2;
        }

        
    }
};
