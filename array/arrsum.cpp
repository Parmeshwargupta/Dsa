#include <iostream>
using namespace std;
void sum_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int arr[5] = {1, 9, 8, 3, 6};
    for (int i = 0; i < 5; i++)
    {
        // cout << arr[i] << " ";
        sum += arr[i];
    }

    sum_arr(arr, 5);
    cout << endl;
    cout << "sum of the array : " << sum;
    return 0;
}
