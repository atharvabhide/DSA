class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	
	void traversal(Node* root, int K, int &res)
	{
	    if (root == NULL)
	    {
	        return;
	    }
	    traversal(root->left, K, res);
	    res = min(res, abs(K-root->data));
	    traversal(root->right, K, res);
	}
	
    int minDiff(Node *root, int K)
    {
        int res = INT_MAX;
        traversal(root, K, res);
        return res;
    }
};
