#include <bits/stdc++.h>

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
    // solution comes here

    int input;
    cin >> input;
    vector<pair<int, int>> v1(input);
    vector<int> v2(input);
    for (int i = 0; i < input; i++)
    {
        cin >> v1[i].f;
        v1[i].s = 0;
    }
    for (int i = 0; i < input; i++)
    {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int j = v2.size() - 1;
    int win = 0;
    for (int i = v1.size() - 1; i >= 0; i--)
    {
        if (v2[j] > v1[i].f && v1[i].s == 0)
        {
            win++;
            v1[i].s = 1;
            j--;
        }
    }
    cout << win << endl;
}
