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

    int n;
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        string in;
        string in2;
        vector<unsigned long long> ans;
        for (int i = 0; i < n + 1; i++)
        {
            vector<string> numbers;

            vector<unsigned long long> num;

            cin >> in;
            cin.ignore();
            getline(cin, in2);
            in.erase(in.begin() + 12, in.end());
            string delimiter = ":";
            string token;
            int pos;
            for (int i = 0; i < 3; i++)
            {
                pos = in.find(delimiter);
                token = in.substr(0, pos);
                numbers.push_back(token);
                in.erase(0, pos + delimiter.length());
            }
            numbers.push_back(in);
            for (string y : numbers)
            {
                num.push_back(stoi(y));
            }
            // for (auto y : num)
            // {
            //     cout << y << endl;
            // }
            unsigned long long total = 0;
            total = total + num[0] * 3600000;
            total = total + num[1] * 60000;
            total = total + num[2] * 1000;
            total = total + num[3];
            ans.push_back(total);
        }
        unsigned long long x;
        x = ans[n];
        int finalAns = 0;
        sort(ans.begin(), ans.end());

        for (int i = 0; i < n + 1; i++)
        {
            if (x == ans[i])
                finalAns = n - i;
        }
        cout << finalAns << endl;
    }
}
