class Solution 
{
  public:
  
    // use the inorder traversal property of bst
    void inorder(Node* root, vector<int> &v)
    {
        if (root == NULL) return;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    
    void search(Node* root, Node* &x, int val)
    {
        if (root == NULL)
        {
            return;
        }
        search(root->left, x, val);
        if (root->data == val)
        {
            x = root;
        }
        search(root->right, x, val);
    }
    
    
    void correctBST(Node* &root)
    {
        vector<int> v1;
        inorder(root, v1);
        vector<int> v2 = v1;
        sort(v1.begin(), v1.end());
        int node1 = -1;
        int node2 = -1;
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] != v2[i])
            {
                if (node1 == -1)
                {
                    node1 = v2[i];
                }
                else if (node2 == -1)
                {
                    node2 = v2[i];
                }
            }
        }
        
        Node* n1 = NULL;
        Node* n2 = NULL;
        search(root, n1, node1);
        search(root, n2, node2);
        swap(n1->data, n2->data);
    }
};
