class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here
        vector<int> arr;

        struct Node*p=head;

        while(p!=NULL)

        {

            arr.push_back(p->data);

            p=p->next;

        }

        sort(arr.begin(), arr.end());

        struct Node*q=head;

        int i=0;

        while(q!=NULL)

        {

            q->data=arr[i];

            q=q->next;

            i++;

        }

    return head;
    }
};
