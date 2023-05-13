#include <iostream>
using namespace std;
void update(int arr[], int n)
{
    cout << "Array in the defined function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
        // updating the value of the array
        arr[1] = 45;
    }
    cout << endl;
}
int main()
{
    int n;
    int arr[3] = {4, 5, 6};
    update(arr, n);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;
    return 0;
}