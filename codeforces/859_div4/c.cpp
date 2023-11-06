#include <bits/stdc++.h>
using namespace std;
int main()
{
    // solution comes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string in;
        cin >> in;
        int index = in[0] - 'a';
        bool ans = true;
        // add for de 0 e 1
        for (int j = 0; j < 2; j++)
        {
            vector<int> abc(26, -1);
            abc[index] = j;

            for (int i = 1; i < n; i++)
            {
                int oldIndex = in[i - 1] - 'a';
                int newIndex = in[i] - 'a';
                if (abc[newIndex] == -1)
                {
                    if (abc[oldIndex] == 0)
                    {
                        abc[newIndex] = 1;
                    }
                    else
                    {
                        abc[newIndex] = 0;
                    }
                }
                else
                {
                    if (abc[oldIndex] == abc[newIndex] && j == 1)
                    {
                        ans = false;
                        break;
                    }
                }
            }
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}