#include <iostream>
using namespace std;
void array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int getMax(int arr[], int n)
{
    int maxi = INT_FAST16_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}
int getMin(int arr[], int n)
{
    int mini = INT_FAST16_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}
int main()
{
    int size;
    int arr[100];
    cout << "Enter the size of the number :" << endl;
    cin >> size;
    cout << "enter the numbers in the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    array(arr, 9);
    cout << "Maximum value is" << getMax(arr, size) << endl;
    cout << "Minmum value is" << getMin(arr, size) << endl;
    return 0;
}