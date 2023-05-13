#include <iostream>
using namespace std;
void printArray(char arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "array printed" << endl;
}
int main()
{
    int n = 10;
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    // cin >> n;
    printArray(arr, 10);
    return 0;
}