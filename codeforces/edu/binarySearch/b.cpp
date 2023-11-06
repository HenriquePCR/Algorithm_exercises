#include <bits/stdc++.h>

#define int long long
using namespace std;
int32_t main()
{
    // solution comes here
    int in1, in2;
    cin >> in1 >> in2;
    vector<int> v;
    int n;
    for (int i = 0; i < in1; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    for (int i = 0; i < in2; i++)
    {
        int q;
        cin >> q;
        int l = 0;
        int r = v.size() - 1;
        while (l < r)
        {
            int m = (l + r) / 2;
            if (v[m] > q)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        if (v[l] > q)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << l - 1 << endl;
        }
    }

    return 0;
}