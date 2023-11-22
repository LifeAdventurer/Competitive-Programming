/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 30.07.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

char mp[1005][1005];
int n, m;
int dx[] = {-1, 0, 1, 0};
int dy[] = { 0, 1, 0,-1};

bool in_map(int x, int y){
	if(x >= 0 && y >= 0 && x <= n && y <= m) return true;
	return false;
}

void dfs(int x, int y){
	mp[x][y] = '#';
	for(int i = 0; i < 4; ++i){
		int p = x + dx[i];
		int q = y + dy[i];
		if(in_map(p, q) && mp[p][q] == '.'){
			dfs(p, q);
		}
	}
}

int main() {
	
	u_ying_u_with_whale;
	cin >> n >> m;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> mp[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(mp[i][j] == '.'){
				dfs(i, j);
				++cnt;
			}
		}
	}
	cout << cnt << '\n';
} 

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/

/*
       ___     _         ___ 
      /   \   / \_|     /   \
      \___/   \_/_|     \___/
     _______   ___|    _______
       ||     /   \      ||
       ||     \___/      ||  

*/    

  // Be awesome ! 
  // Sabrina <3
  // u ying u <3
  // seorina <3 
  // fighting~ 
  // I will fulfill my dreams!
