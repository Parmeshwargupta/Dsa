#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    // int size;
    // int ans = 0;
    int arr[5] = {1, 2, 1, 2, 6};
    // for (int i = 0; i < 5; i++)
    // {
    //     ans = ans ^ arr[i];
    // }
    cout << findUnique(arr, 5) << endl;
    return 0;
}