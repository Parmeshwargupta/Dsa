#include <bits/stdc++.h>
using namespace std;
void printarr(vector<string> &v)
{
    cout << "size" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size() ->0(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    printarr(v);
    return 0;
}