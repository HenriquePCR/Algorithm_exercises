#include <bits/stdc++.h>

// algumas coisas de c++
// map<int, bool> m;
// cin >> input;
// cout << output;
// vector<int> x(n);
// sort(x.begin(), x.end());

using namespace std;

bool compareOdd(pair<char, long long> l, pair<char, long long> r)
{
    if (l.second & 1)
        return false;
    return l.second < r.second;
}
int main()
{
    // solution comes here
    string n;
    cin >> n;
    sort(n.begin(), n.end());
    vector<pair<char, long long>> lettersN;
    deque<char> ans;
    lettersN.push_back({n[0], 1});
    long long aux = 1;
    long long index = 0;
    ans.push_back(n[0]);
    for (long long i = 1; i < n.size(); i++)
    {
        if (n[i] == n[i - 1])
        {
            aux++;
            lettersN.back().first = n[i];
            lettersN.back().second = aux;
            // if (aux % 2 == 0)
            // {
            //     ans.push_front(n[i]);
            //     // cout << n[i] << endl;
            //     // cout << index << "manteve" << endl;
            //     // index++;
            // }
            // if (aux % 2 == 1)
            // {
            //     ans.push_back(n[i]);
            //     // cout << n[i] << endl;
            //     // cout << index << "manteve" << endl;
            //     // index++;
            // }
        }
        else
        {
            aux = 1;
            lettersN.push_back({n[i], aux});
            // cout << n[i] << endl;
            // cout << index << "troca" << endl;
            // index++;
            // ans.push_back(n[i]);
        }
    }
    int odd = 0;
    /*
 for (const auto &pair : lettersN)
    {
        if (pair.second % 2 == 1)
            odd++;
    }
    */
    long long totalIndex;
    for (auto pair : lettersN)
    {
        if (pair.second % 2 == 1)
            odd++;
        totalIndex = totalIndex + pair.second;
    }
    sort(lettersN.begin(), lettersN.end(), compareOdd);
    for (auto pair : lettersN)
    {
        cout << pair.second << "";
    }
    cout << endl;
    if (odd > 1)
        cout << "NO SOLUTION";
    else
    {
        cout << "SOLUTION" << endl;
        for (long long i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
    }
}

/*
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    // solution comes here
    string x;
    cin >> x;
    long long count = 0;
    sort(x.begin(), x.end());
    deque<pair<char,long long>> ans;
    for(int i = 1; i < x.size();i++){


    }
}

      if(x[i] == x[i-1] && count % 2 ==0){
            ans.push_front(x[i]);
            count++;
        }
        else if(x[i] == x[i-1] && count % 2 ==1){
            ans.push_back(x[i]);
            count++;
        }
        else{
            count = 0;
        }


*/
