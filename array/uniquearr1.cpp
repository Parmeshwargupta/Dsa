#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int unique(int arr[], int size)
int unique(vector<int> &arr)

{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    vector<int> arr;

    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the element of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    //  cout << xorOfArray(arr, n) << endl;

    cout << unique(arr) << endl;
    return 0;
    // unique();
}
