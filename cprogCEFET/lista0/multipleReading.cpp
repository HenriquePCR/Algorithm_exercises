#include <bits/stdc++.h>

// algumas coisas de c++
// map<int, bool> m;
// cin >> input;
// cout << output;
// vector<int> x(n);
// sort(x.begin(), x.end());

using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    // solution comes here

    string in;
    while (cin >> in)
    {
        int num;
        cin >> num;
        int aux = 0;
        int ans = 0;
        bool r = false; // ultimo foi R
        for (int i = 0; i < in.size(); i++)
        {
            if (in[i] == 'R' && r == false)
            {
                ans++;
                aux++;
                r = true;
            }
            else if (in[i] == 'R' && r == true)
            {
                aux++;
                if (aux > num)
                {
                    r = true;
                    aux = 1;
                    ans++;
                }
            }

            if (in[i] == 'W')
            {
                ans++;
                aux = 0;
                r = false;
            }
        }
        cout << ans << endl;
    }
}
