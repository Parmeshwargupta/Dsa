#include <iostream>
using namespace std;
// Function Signature
void counting(int n)
{ // functiion body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    // Function call
    counting(n);
    return 0;
}