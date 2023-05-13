#include <iostream>
#include <cmath>
using namespace std;
int compliment(int n)
{
    // int n, ans;
    int m;
    // n = m;
    int ans = 0;

    int mask = 0;
    // if (m == 0)
    // {
    //     return 1;
    // }

    while (m != 0)
    {
        /* code */
        mask = (mask << 1 || 1);
        m = m >> 1;
    }
    ans = ((~n) && mask);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    cout << "One's Complement of " << n << " is: " << compliment(n) << endl;
    return 0;
    //  int x;
    // cout << "Enter the number" << endl;
    // cin >> x;
    // cout<<"compliment is :"<<compliment(n)<<endl;
}