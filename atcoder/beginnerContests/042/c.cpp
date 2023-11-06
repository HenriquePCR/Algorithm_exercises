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

int main()
{
    _
        // solution comes here
        int n,
        k;
    cin >> n >> k;
    vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == n)
            {
                digits.erase(digits.begin() + i);
            }
        }
    }
    // for (auto u : digits)
    // {
    //     cout << u << " ";
    // }
    // cout << endl;
    int aux = n;
    vector<int> v;
    while (aux > 0)
    {
        int digit = aux % 10;
        v.push_back(digit);
        aux /= 10;
    }
    reverse(v.begin(), v.end());
    vector<int> ans;
    bool t = false;
    bool max = false;
    for (int i = 0; i < v.size(); i++)
    {
        t = true;
        if (max)
        {
            ans.push_back(digits[0]);
        }
        else
        {
            for (int j = 0; j < digits.size(); j++)
            {
                if (digits[j] == v[i] && t == true)
                {
                    ans.push_back(digits[j]);
                    t = false;
                }
                else if (digits[j] > v[i] && t == true)
                {
                    ans.push_back(digits[j]);
                    t = false;
                    max = true;
                }
            }
        }
    }
    // reverse(ans.begin(), ans.end());
    for (auto u : ans)
    {
        cout << u;
    }
    cout << endl;

    return 0;
}
