/**
 *    author: life adventurer
 *    created: 11.06.2022 23:40:22   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	for(int i=0; i<k; i++){
		if(n%10 == 0){
			n /= 10;
		}
		else{
			n--;
		}
	}
	cout << n << '\n';
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
