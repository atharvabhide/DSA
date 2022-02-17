#include<bits/stdc++.h>
using namespace std;
int hoare_partition(vector<int> &arr, int l, int h)
{
    // first element is considered as the pivot element
    // maintain two windows one having elements lesser than pivot and other having elements greater than pivot
    // initially both windows are empty
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int result = hoare_partition(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The result is " << result << endl;
    cout << endl;
    return 0;
}
