#include<bits/stdc++.h>
using namespace std;
int naive_partition(vector<int> &arr, int l, int h, int p)
{
    vector<int> left;
    int n1 = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] < arr[p])
        {
            left.push_back(arr[i]);
            n1++;
        }
    }
    for (int i = l; i <= h; i++)
    {
        if (arr[i] == arr[p])
        {
            left.push_back(arr[i]);
            n1++;
        }
    }
    int result = left.size()-1;
    vector<int> right;
    int n2 = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            right.push_back(arr[i]);
            n2++;
        }
    }
    for (int i = l; i < n1; i++)
    {
        arr[i] = left[i];
    }
    for (int i = l; i < n2; i++)
    {
        arr[n1+i] = right[i];
    }
    return result;
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
    int p;
    cout << "Enter the partition index-\n";
    cin >> p;
    int result = naive_partition(arr,0,n-1,p);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The result is " << result << endl;
    cout << endl;
    return 0;
}
