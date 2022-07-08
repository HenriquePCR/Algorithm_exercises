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
    string x;
    cin >> x;
    long long count = 0;
    sort(x.begin(), x.end());
    deque<pair<char,long long>> ans;
    for(int i = 1; i < x.size();i++){

        
    }
}
/*
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