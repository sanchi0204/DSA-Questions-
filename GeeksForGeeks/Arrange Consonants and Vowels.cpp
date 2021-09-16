struct Node* arrange(Node *head)
{
   //Code here
   Node *cs=NULL,*ce=NULL,*vs=NULL, *ve=NULL;

   Node* curr=head;

   while(curr)
   {
       char x=curr->data;

       if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        {
            if(vs==NULL)
            {
                vs=curr;
                ve=vs;
            }

            else
            {
                ve->next=curr;
                ve=ve->next;
            }
        }

        else
        {
            if(cs==NULL)
            {
                cs=curr;
                ce=cs;
            }

            else
            {
                ce->next=curr;
                ce=ce->next;
            }
        }

        curr=curr->next;
   }

   if(vs==NULL || cs==NULL)
    return head;

    ve->next=cs;
    ce->next=NULL;

    return vs;
}
