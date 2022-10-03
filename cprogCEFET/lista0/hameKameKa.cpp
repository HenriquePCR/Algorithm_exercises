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
        string in;
        cin >> in;

        int aux1 = 0;

        bool firstA = false;
        for (int i = 1; i < in.size(); i++)
        {
            if (in[i] == 'a')
            {
                aux1++;
                firstA = true;
            }
            else if (firstA == true && in[i] != 'a')
                break;
        }
        int j = aux1 + 1;
        int aux2 = 0;
        bool secondA = false;
        for (j; j < in.size(); j++)
        {
            if (in[j] == 'a')
            {
                aux2++;
                firstA = true;
            }
            else if (secondA == true && in[j] != 'a')
                break;
        }
        int totalA = aux1 * aux2;
        vector<char> ans;
        cout << "k";
        // cout << aux1 << " " << aux2;
        for (int k = 0; k < totalA; k++)
        {
            cout << "a";
        }
        cout << endl;
    }
}