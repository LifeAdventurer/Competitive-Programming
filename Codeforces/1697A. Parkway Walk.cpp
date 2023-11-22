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
	int tt;
	cin >> tt;
	while(tt--){
		int n, m, ans, a;
		cin >> n >> m;
		while(n--){
			cin >> a;
			m -= a;
		}
		if(m >= 0){
			cout << "0" << '\n';
		}
		else{
			cout << -m << '\n';
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
