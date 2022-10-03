#include <bits/stdc++.h>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n;
    cin >> n;
    cin.ignore(1, '\n');
    vector<char> ans;
    for (int i = 0; i < n; i++)
    {
        string in;
        getline(cin, in);
        for (int i = in.size() / 2 - 1; i >= 0; i--)
        {

            cout << in[i];
        }
        for (int i = in.size(); i > in.size() / 2 - 1; i--)
        {

            cout << in[i];
        }

        cout << endl;
    }
    return 0;
}