#include <iostream>
using namespace std;
int main()
{
    int n, num;
    cout << "Enter the number" << endl;

    cin >> n;
    num = 2;
    if (num < n)
    {
        if (n % num == 0)
        {
            cout << "number is not prime" << endl;
        }
        else
        {
            cout << "number is prime" << endl;
        }
    }
    else
    {

        num = num + 1;
    }
}
