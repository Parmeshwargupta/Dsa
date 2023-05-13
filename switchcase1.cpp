#include <iostream>

using namespace std;
int main()
{
    int n;
    int n1, n2, n5, n10, n20, n50, n100, n200, n500, n1000, n2000;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = n1000 = n2000 = 0;

    cout << "Enter the number" << endl;
    cin >> n;
    switch (n >= 2000)
    {
    case 1:

        n2000 = n / 2000;
        n -= n2000 * 2000;
        break;
    }
    switch (n >= 1000)
    {
    case 1:
        n1000 = n / 1000;
        n -= n1000 * 1000;
        break;
    }
    switch (n >= 500)
    {
    case 1:
        n500 = n / 500;
        n -= n500 * 500;
        break;
    }
    switch (n >= 200)
    {
    case 1:
        n200 = n / 200;
        n -= n200 * 200;
        break;
    }
    switch (n >= 100)
    {
    case 1:
        n100 = n / 100;
        n -= n100 * 100;
        break;
    }
    switch (n >= 50)
    {
    case 1:
        n50 = n / 50;
        n -= n50 * 50;
        break;
    }
    switch (n >= 20)
    {
    case 1:
        n20 = n / 20;
        n -= n20 * 20;
        break;
    }
    switch (n >= 10)
    {
    case 1:
        n10 = n / 10;
        n -= n10 * 10;
        break;
    }
    switch (n >= 5)
    {
    case 1:
        n5 = n / 5;
        n -= n5 * 5;
        break;
    }
    switch (n >= 2)
    {
    case 1:
        n2 = n / 2;
        n -= n2 * 2;
        break;
    }
    switch (n >= 1)
    {
    case 1:
        n1 = n / 1;
        n -= n1 * 1;
        break;
    }
    cout << "number of 2000 notes are :" << n2000 << endl;
    cout << "number of 1000 notes are :" << n1000 << endl;
    cout << "number of 500 notes are :" << n500 << endl;
    cout << "number of 200 notes are :" << n200 << endl;
    cout << "number of 100 notes are :" << n100 << endl;
    cout << "number of 50 notes are :" << n50 << endl;
    cout << "number of 20 notes are :" << n20 << endl;
    cout << "number of 10 notes are :" << n10 << endl;
    cout << "number of 5 notes are :" << n5 << endl;
    cout << "number of 2 notes are :" << n2 << endl;
    cout << "number of 1 notes are :" << n1 << endl;
}
