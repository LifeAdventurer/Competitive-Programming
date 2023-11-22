/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.09.2022
 *
 *    mood: OwO   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) x.begin(), x.end()
#define int long long

int n, m;
vector<int> a;
long long sum, ans = -1e18;

void dfs(vector<int> v){
	if(v.size() == m){
    sum = 0;
    for(int i = 0; i < m; ++i){
      sum += (a[v[i] - 1]) * (i + 1);
    }
    ans = max(ans, sum);
		return;
	}
	int s = (v.size() == 0 ? 1 : v.back() + 1);
	v.push_back(0);
	for(int i = s; i <= n; ++i){
		v[v.size() - 1] = i;
		dfs (v);
	}
}

signed main() {
  u_ying_u_with_whale;
  cin >> n >> m;
  int x;
  for(int i = 0; i < n; ++i){
    cin >> x;
    a.push_back(x);
  }
  dfs(vector<int>());
  cout << ans << '\n';

  return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
