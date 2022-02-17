class Solution
{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         for(int i=0; i<sizeOfArray; i++){
            max2 = arr[i] > max ? max : arr[i] > max2 && arr[i]!=max ? arr[i] : max2;
            max = arr[i] > max ? arr[i] : max;
        }
        
        return {max, (max2==INT_MIN) ? -1 : max2};

    }
};
