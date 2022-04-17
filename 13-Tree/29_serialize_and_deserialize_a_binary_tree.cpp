class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    
    void dfs(Node* root, vector<int> &arr)
    {
        if (root == NULL)
        {
            arr.push_back(-1);
            return;
        }
        arr.push_back(root->data);
        dfs(root->left, arr);
        dfs(root->right, arr);
    }
    
    vector<int> serialize(Node *root) 
    {
        vector<int> arr;
        dfs(root, arr);
        return arr;
    }
    
    //Function to deserialize a list and construct the tree.
    int index = 0;
    Node* deSerialize(vector<int> &A)
    {
        if (index == A.size())
        {
            return NULL;
        }
        int data = A[index];
        index++;
        if (data == -1)
        {
            return NULL;
        }
        Node* root = new Node(data);
        root->left = deSerialize(A);
        root->right = deSerialize(A);
        return root;
    }
};
