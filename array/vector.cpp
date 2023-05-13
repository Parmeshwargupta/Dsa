#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> v)
{
    cout << "size:" << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the element of the array" << endl;
    for (int i = 0; i < n; ++i)
    {
        int x;

        cin >> x;
        v.push_back(x);
    }
    printArray(v);
}