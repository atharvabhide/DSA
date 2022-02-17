class Solution
{
  public:
    //Complete this function
    //Function to insert elements of array in the hashTable avoiding collisions.
    vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray)
    {
       // simple collision handling by using chaining
       vector<vector<int>> hashtable(hashSize);
       for (int i = 0; i < sizeOfArray; i++)
       {
           int smallerkey = arr[i] % hashSize;
           hashtable[smallerkey].push_back(arr[i]);
       }
       return hashtable;
    }
};
