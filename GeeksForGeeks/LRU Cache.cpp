class LRUCache
{
    public:
    //Constructor for initializing the cache capacity with the given value.

    class node
    {
        public:

        int key;
        int val;
        node* next;
        node* prev;

        node(int k, int v)
        {
            key=k;
            val=v;
        }

    };

    int capacity;
    unordered_map<int,node*> mp;
   node* head= new node(-1,-1);
   node* tail = new node(-1,-1);


    LRUCache(int cap)
    {
        // code here
        capacity=cap;
        head->next=tail;
   tail->prev=head;
    }

    //Function to return value corresponding to the key.
    int get(int key)
    {
        // your code here
        if(mp.find(key)!=mp.end())
        {
            node* resnode = mp[key];
            int res=resnode->val;
            deletenode(resnode);
            mp.erase(key);
            addnode(resnode);
            mp[key]=head->next;

            return res;
        }

        return -1;
    }

    //Function for storing key-value pair.
    void set(int key, int value)
    {
        if(mp.find(key)!=mp.end())
        {
            node* delnode = mp[key];
            deletenode(delnode);
            mp.erase(key);
        }

        if(mp.size()==capacity)
        {
            node* delnode = tail->prev;
            mp.erase(delnode->key);
            deletenode(delnode);
        }

        node* newnode = new node(key,value);
        addnode(newnode);
        mp[key]=head->next;
    }

    void addnode(node* newnode)
    {
        node* temp = head->next;
        newnode->next=temp;
        newnode->prev=head;

        temp->prev=newnode;
        head->next=newnode;
    }

    void deletenode(node* delnode)
    {
        node* delprev=delnode->prev;
        node* delnext = delnode->next;

        delprev->next=delnext;
        delnext->prev=delprev;
    }
};
