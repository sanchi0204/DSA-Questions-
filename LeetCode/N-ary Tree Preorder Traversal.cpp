/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    //recursive solution

    /* vector<int> v;
    vector<int> preorder(Node* root) {

        if(root==NULL)
            return v;

        preorderRec(root);

        return v;

    }


    void preorderRec(Node* node)
    {
        if(node==NULL)
            return;

        v.push_back(node->val);

       for(int i=0;i<node->children.size();i++)
           preorderRec(node->children[i]);
    }
    */

    //iterative solution

    vector<int> preorder(Node* root)
    {
        vector<int> v;

        if(root==NULL)
            return v;

        stack<Node*> s;
        s.push(root);

        while(s.empty()==false)
        {
            Node* node = s.top();
            s.pop();

            v.push_back(node->val);
            for(int i=node->children.size()-1;i>=0;i--)
                s.push(node->children[i]);
        }

        return v;
    }
};
