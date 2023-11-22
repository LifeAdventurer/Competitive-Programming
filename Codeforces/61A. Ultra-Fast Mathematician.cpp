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
	string a, b, c;
	cin >> a >> b;
	for(int i=0; i<a.size(); i++){
		if(a[i] == b[i]){
			c += '0';
		}
		else{
			c += '1';
		}
	}
	cout << c << '\n';
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
