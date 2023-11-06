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
    // solution comes here
    int n;
    cin >> n;
    set<unsigned long long> v;
    for (int i = 0; i < n; i++)
    {
        unsigned long long in;
        cin >> in;
        v.insert(in);
    }
    cout << v.size() << endl;

    return 0;
}
