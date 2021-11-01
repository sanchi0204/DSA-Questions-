class Solution{
  public:
    //Function to merge K sorted linked list.

    struct MyCmp
    {
            bool operator()(Node* &n1, Node* &n2)
            {
                return n1->data>n2->data;
            }
    };

    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here

        //   if(arr.size()==0)
        //     return NULL;

           priority_queue<Node*, vector<Node*>, MyCmp> pq;

           for(int i=0;i<K;i++)
           {
               if(arr[i]!=NULL)
                pq.push(arr[i]);
           }

           Node* dummy=new Node(-1);
           Node* temp=dummy;

           while(pq.empty()==false)
           {
               Node* curr=pq.top();
               pq.pop();

               temp->next=new Node(curr->data);
               temp=temp->next;

               if(curr->next!=NULL)
                pq.push(curr->next);

           }

           return dummy->next;
    }
};
