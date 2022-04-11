class Solution
{
    public:
    //Function to connect nodes at same level.
    // use level order traversal line by line vali concept
    void connect(Node *root)
    {
       vector<Node*> v;
       queue<Node*> q;
       q.push(root);
       while (q.empty() != true)
       {
           int count = q.size();
           for (int i = 0; i < count; i++)
           {
               Node* temp = q.front();
               q.pop();
               v.push_back(temp);
               if (temp->left != NULL)
               {
                   q.push(temp->left);
               }
               if (temp->right != NULL)
               {
                   q.push(temp->right);
               }
           }
           for (int i = 0; i < v.size()-1; i++)
           {
               v[i]->nextRight = v[i+1];
           }
           v[v.size()-1]->nextRight = NULL;
           v.clear();
       }
    }    
};
