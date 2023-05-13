#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << "Print the array" << endl;
}
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{

    int size;
    int even[8] = {4, 5, 6, 8, 9, 3, 2, 1};
    int odd[5] = {11, 33, 88, 27, 26};
    cout << "Array 1 before swapping :" << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "Array 1 after swapping :" << endl;
    swapalternate(even, 8);
    printArray(even, 8);

    cout << "Array 2 before swapping :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
    cout << "Array 2 after swapping :" << endl;
    swapalternate(odd, 5);
    printArray(odd, 5);
    // cout << "Print the array" << endl;

    // cout << "the given arry is :" << even << " ";
    // cout << "the given arry is :"<<(swapalternate(even, 8)<<endl;

    return 0;
}