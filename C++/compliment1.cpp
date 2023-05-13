#include <iostream>
#include <cmath>
using namespace std;
int findComplement(int n)
{
    int bit_count = floor(log2(n)) + 1;
    int ones = ((1 << bit_count) - 1);
    return ones ^ n;
}
int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    cout << "One's Complement of " << n << " is: " << findComplement(n);
}