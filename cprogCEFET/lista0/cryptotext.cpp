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
    unsigned long long input;
    cin >> input;

    for (unsigned long long i = 0; i < input; i++)
    {

        string text;
        cin >> text;
        vector<char> ans;
        int x = 0;
        for (int i = text.size() - 1; i >= 0; i--)
        {
            if (text[i] >= 'A' && text[i] <= 'Z')
                x++;
            else
            {
                ans.push_back(text[i]);
            }
        }
        for (char y : ans)
        {
            cout << y;
        }
        cout << endl;
    }
}
