#include<bits/stdc++.h>
using namespace std;
int lomuto_partition(vector<int> &arr, int l, int h)
{
    // consider the last element to be the pivot
    // maintain a window of smaller elements than pivot
    // initially the window is empty
    // update the window when arr[j] < pivot
    // explicitly handle the case of putting pivot in the correct position
    int pivot = arr[h];
    int i = l-1;
    for (int j = l; j <= h-1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
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
    int result = lomuto_partition(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The result is " << result << endl;
    cout << endl;
    return 0;
}
