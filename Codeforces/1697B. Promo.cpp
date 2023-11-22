/**
 *    author: life adventurer
 *    created: 12.06.2022 22:41:33   
**/
#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

int p[1000005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	for(int i=0; i<n; i++){
		cin >> p[i]; 
	}
	sort(p, p+n, greater<int>());
	int x, y;
	ll sum[n+1];
	sum[0] = 0;
	sum[1] = p[0];
	for(int i=2; i<=n; i++){
    	sum[i] = sum[i-1] + p[i-1];
	}
	while(q--){
		cin >> x >> y;
		cout << sum[x] - sum[x-y] << '\n';
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
