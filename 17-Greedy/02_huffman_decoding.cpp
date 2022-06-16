/*
Structure of the node of Huffman tree is as
struct MinHeapNode
{
	char data;
	int freq;
	MinHeapNode *left, *right;
};
*/


//Function to return the decoded string.
string decodeHuffmanData(struct MinHeapNode* root, string binaryString)
{
    string res = "";
    MinHeapNode* temp = root;
    for (int i = 0; i < binaryString.size(); i++)
    {
        if (temp->data != '$')
        {
            res += temp->data;
            temp = root; // works like return
        }
        if (binaryString[i] == '0')
        {
            temp = temp->left;
        }
        if (binaryString[i] == '1')
        {
            temp = temp->right;
        }
    }
    res += temp->data;
    return res;
}
