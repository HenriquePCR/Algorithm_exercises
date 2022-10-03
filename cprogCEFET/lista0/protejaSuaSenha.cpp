#include <bits/stdc++.h>

using namespace std;

int main()
{

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
#define ll long long
    vector<pair<ll, ll>> v1;
    vector<pair<ll, ll>> v2;

    ll passM[12];

    ll in1, in2;
    char in3;
    ll lett1[6];
    ll lett2[6];
    for (ll i = 0; i < 5; i++)
    {
        cin >> in1;
        cin >> in2;
        // cout << in1 << " ";
        // cout << in2 << " ";
        v1.push_back(std::make_pair(in1, in2));
    }
    for (ll i = 0; i < 6; i++)
    {
        cin >> in3;
        lett1[i] = (in3 - 'A');
        // cout << lett1[i] << " ";
        cout << in3 << "_" << (in3 - 'A') << " ";
    }
    cout << endl;
    // string teste;
    // cin >> teste;
    // cout << teste;
    for (ll i = 0; i < 5; i++)
    {
        cin >> in1;
        cin >> in2;
        // cout << in1 << " ";
        // cout << in2 << " ";
        v2.push_back(std::make_pair(in1, in2));
    }
    for (ll i = 0; i < 6; i++)
    {
        cin >> in3;
        lett2[i] = (in3 - 'A');
        // cout << lett1[i] << " ";
        cout << in3 << "_" << (in3 - 'A') << " ";
    }
    cout << endl;

    // for (ll i = 0; i < 5; i++)
    // {
    //     cout << v2[i].first;
    //     cout << v2[i].second;
    //     cout << "";
    // }
    // cout << endl;
    // for (ll i = 0; i < 6; i++)
    // {
    //     cout << lett2[i];
    // }
    ll ans[6];
    for (ll i = 0; i < 6; i++)
    {

        // cout << v1[lett1[i]].first;
        // cout << v1[lett1[i]].second;
        // cout << " ";
        // cout << v2[lett2[i]].first;
        // cout << v2[lett2[i]].second;
        // cout << " ";

        if (v1[lett1[i]].first == v2[lett2[i]].first)
            ans[i] = v1[lett1[i]].first;
        else if (v1[lett1[i]].first == v2[lett2[i]].second)
            ans[i] = v1[lett1[i]].first;
        else if (v1[lett1[i]].second == v2[lett2[i]].first)
            ans[i] = v1[lett1[i]].second;
        else if (v1[lett1[i]].second == v2[lett2[i]].second)
            ans[i] = v1[lett1[i]].second;
        else
        {
            cout << " ERROR ";
        }
    }

    cout << endl;

    // for (ll i = 0; i < 5; i++)
    // {
    //     cout << v2[i].first;
    //     cout << v2[i].second;
    //     cout << " ";
    // }

    // for (auto y : ans)
    // {
    //     cout << y << " ";
    // }

    return 0;
}