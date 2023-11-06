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

    ll in;
    cin >> in;

    string v1S;
    vector<char> v1;
    getline(cin, v1S);
    for (int i = 0; i < v1S.size(); i++)
    {
        v1[i] = v1S[i];
    }
    string v2S;
    vector<char> v2;
    getline(cin, v2S);
    for (int i = 0; i < v2S.size(); i++)
    {
        v2[i] = v2S[i];
    }
    string v3S;
    vector<char> v3;
    getline(cin, v3S);
    for (int i = 0; i < v3S.size(); i++)
    {
        v3[i] = v3S[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    

    // for(ll i = 0; i < in; i++){
    //     vector<char> v1;
    //     vector<char> v2;
    //     vector<char> v3;
    // }
}
