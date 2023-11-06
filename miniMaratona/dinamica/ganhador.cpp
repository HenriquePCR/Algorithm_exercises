#include <iostream>
#include <cstdio> 
#include <algorithm> 
#include <vector> 

using namespace std; 

#define PB push_back 

vector<long long> pilha;
long long n;

int main(){
    long long x;
	while(cin >> x){
		vector<long long>::iterator it = lower_bound(pilha.begin(), pilha.end(), x);
		if(it==pilha.end()) pilha.PB(x);
		else *it = x;
	}
	cout << pilha.size() << endl;
	return 0;
}