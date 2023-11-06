#include <bits/stdc++.h>

// vector<vector<int>> matrix(RR, vector<int>(CC));

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << end

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0X3f3f3f3f3f3f3f3fll;

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        long long sr = sqrt(x);

        // if product of square root
        // is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

int main()
{
    // solution comes here
    int p;
    cin >> p;
    for (int k = 0; k < p; k++)
    {

        int t;
        int max = 0;
        bool added = false;
        cin >> t;
        stack<int> v[t];
        for (int i = 1; i < 14000; i++)
        {
            added = false;
            for (int j = 0; j < t; j++)
            {
                // cout << "ultima bola da coluna " << j << " é " << v[j].back() << endl;
                if (v[j].size() == 0)
                {
                    // cout << "zerado, bola " << i << " adicionada na coluna " << j << endl;
                    v[j].push(i);
                    added = true;
                    break;
                }
                else if (isPerfectSquare(v[j].top() + i))
                {
                    // cout << "perfect, bola " << i << " adicionada na coluna " << j << endl;
                    v[j].push(i);
                    added = true;
                    break;
                }
            }
            if (added)
            {
                continue;
            }
            else
            {
                max = i;
                break;
            }
        }
        cout << max - 1 << endl;
    }

    return 0;
}
