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
bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;

    // Reverse the string P
    reverse(P.begin(), P.end());

    // If S is equal to P
    if (S == P)
    {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else
    {
        // return "No"
        return false;
    }
}
int main()
{
    // solution comes here
    string in;
    cin >> in;
    if (isPalindrome(in))
    {
        cout << "sim" << endl;
    }
    else
    {
        cout << "nao" << endl;
    }
    return 0;
}
