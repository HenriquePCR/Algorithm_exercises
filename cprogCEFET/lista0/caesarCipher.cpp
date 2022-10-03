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

    long long inN;
    ;
    cin >> inN;
    cin.ignore(1, '\n');
    for (int i = 0; i < inN; i++)
    {
        string in;
        cin >> in;

        int n;
        cin >> n;

        int aux1, aux2 = 0;

        for (int i = 0; i < in.size(); i++)
        {
            if (in[i] - n < 'A')
            {
                aux1 = in[i] - 'A';
                aux2 = (n - 1) - aux1;
                in[i] = 'Z' - aux2;
            }
            else
            {
                in[i] = in[i] - n;
            }
        }
        for (char y : in)
        {
            cout << y;
        }
        cout << endl;
    }
}
