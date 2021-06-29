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

    //recursive
    /*
    vector<int> v;
    vector<int> postorder(Node* root) {

        if(root==NULL)
            return {};

        postRec(root);

        reverse(v.begin(),v.end());
        return v;
    }

    void postRec(Node* p)
    {
        if(p==NULL)
            return;

    v.push_back(p->val);

        for(int i=p->children.size()-1;i>=0;i--)
            postRec(p->children[i]);

    }

   */

    //iterative
    vector<int> postorder(Node* root)
    {
        if(root==NULL)
            return {};

        stack<Node*> s;
        vector<int> res;
        s.push(root);

        while(!s.empty())
        {
            Node* p = s.top();
            s.pop();
            res.push_back(p->val);

            for(int i=0;i<p->children.size();i++)
                s.push(p->children[i]);

        }

        reverse(res.begin(),res.end());

        return res;
    }

    };
