/**
 *    author: life adventurer
 *    created: 11.06.2022 13:04:22   
**/
#include <iostream>

using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	for(int i=0; i<n; i++){
		cout << "I ";
		if(i%2 == 0){
			cout << "hate ";
		}
		else{
			cout << "love ";
		}
		if(i != n-1){
			cout << "that ";
		}
		else{
			cout << "it ";
		}
	}
	return 0;
}
     
// ============== Notes =============== //
// common bugs
// - fastio
// - int overflow (especially intermediate expressions)
// - forgot to initialize data (is 0 the right value? -1, inf, -inf?)
// - array bounds (indices bigger than MAXN?)
// - special cases (n=1? graph not connected?)
// - re-initialize efficiently between test cases
