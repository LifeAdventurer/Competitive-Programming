/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int mp[105][105];
bool ok[105][105];

int main() {
	
	u_ying_u_with_whale;
	int n, m, mn = 1e9;
	cin >> n >> m;
	int x, y;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			cin >> mp[i][j];
			ok[i][j] = true;
			if(mp[i][j] < mn){
				mn = mp[i][j];
				x = i;
				y = j;
			}
		}
	}
	long long ans = mp[x][y];
	while(ok[x-1][y] || ok[x+1][y] || ok[x][y-1] || ok[x][y+1]){
		ok[x][y] = false;
		mn = 1e9;
		int a = x, b = y;
		if(ok[x-1][y]){
			if(mn > mp[x-1][y]){
				mn = mp[x-1][y];
				a = x-1;
				b = y;
			} 	
		}
		if(ok[x+1][y]){
			if(mn > mp[x+1][y]){
				mn = mp[x+1][y];
				a = x+1;
				b = y;
			}
		}
		if(ok[x][y-1]){
			if(mn > mp[x][y-1]){
				mn = mp[x][y-1]; 
				a = x;
				b = y-1;
			}
		}
		if(ok[x][y+1]){
			if(mn > mp[x][y+1]){
				mn = mp[x][y+1];
				a = x;
				b = y+1;
			}
		}
		x = a, y = b;
		ans += mp[x][y]; 
	} 
	cout << ans << '\n';
} 

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/

/* __  __
  //\\//\\
  \\\\////    
   \\\///    passionate positive  
    \\//
     \/  
*/

/*
       ___     _         ___ 
      /   \   / \_|     /   \
      \___/   \_/_|     \___/
     _______   ___|    _______
       ||     /   \      ||
       ||     \___/      ||  
	 
*/    

  // Be awesome ! 
  // Sabrina<3
  // u ying u <3 
  // fighting~ 
  // I will fulfill my dreams!
