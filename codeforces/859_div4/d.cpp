#include <bits/stdc++.h>
using namespace std;
int main()
{
    // solution comes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v;
        vector<int> vC;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
            vC.push_back(num);
        }
        //    for(auto u:v){
        //        cout << u << " ";
        //    }
        for (int i = 0; i < q; i++)
        {
            int n1, n2, n3;
            for (int i = 0; i < n; i++)
            {
                vC[i] = v[i];
            }
            cin >> n1 >> n2 >> n3;
            for (int i = n1 - 1; i < n2; i++)
            {
                vC[i] = n3;
            }
            int total = 0;
            for (auto u : vC)
            {
                total += u;
            }
            if (total % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
