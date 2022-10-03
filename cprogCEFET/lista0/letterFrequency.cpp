#include <iostream>
#include <string>
#include <algorithm> // std::sort
#include <vector>    // std::vector
#include <algorithm>
#include <cctype>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    // solution comes here
    int y;
    cin >> y;
    cin.ignore(1, '\n');
    for (int j = 0; j < y; j++)
    {
        string in;
        getline(cin, in);

        vector<char> v;

        for (int i = 0; i < in.size(); i++)
        {
            v.push_back(in[i]);
        }
        transform(v.begin(), v.end(), v.begin(),
                  [](unsigned char c)
                  { return std::tolower(c); });
        sort(v.begin(), v.end());

        // for (char i : v)
        //     cout << i;
        int max = 0;
        int aux = 0;
        bool oneLetter = true;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == ' ')
            {
            }
            else if (v[i] == v[i - 1])
            {
                aux++;
            }
            else if (v[i] != v[i - 1])
            {
                oneLetter = false;
                if (aux >= max)
                    max = aux;
                aux = 0;
            }
        }
        if (oneLetter == true)
        {
            cout << v[0];
        }
        else
        {
            // cout << max << endl;
            vector<char> ans;
            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] == ' ')
                {
                }
                else if (v[i] == v[i - 1])
                {
                    aux++;
                }
                else if (v[i] != v[i - 1])
                {
                    // ver isso do max e aux
                    // cout << aux << " " << max;
                    if (aux == max)
                        ans.push_back(v[i - 1]);
                    aux = 0;
                    if (i == v.size() - 1 && aux == max)
                        ans.push_back(v[i]);
                }
            }
            sort(ans.begin(), ans.end());
            for (char x : ans)
                cout << x;
        }

        cout << endl;
    }
}
