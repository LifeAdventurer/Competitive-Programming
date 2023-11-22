/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 19.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int mp[55][55];
int change[55][55];

int main() {
	
	u_ying_u_with_whale;
	int r, c, k, m;
	cin >> r >> c >> k >> m;
	for(int i = 1; i <= r; ++i){
		for(int j = 1; j <= c; ++j){
			cin >> mp[i][j];
		}
	}
	
	int dx[] = {-1, 0, 1, 0};
	int dy[] = { 0, 1, 0,-1};
	while(m--){
		for(int i = 1; i <= r; ++i){
			for(int j = 1; j <= c; ++j){
				for(int l = 0; l < 4; ++l){
					if(mp[i+dx[l]][j+dy[l]] != -1 && mp[i][j] != -1 && i+dx[l] > 0 && i+dx[l] <= r && j+dy[l] > 0 && j+dy[l] <= c){
						change[i+dx[l]][j+dy[l]] += mp[i][j]/k;	
						change[i][j] -= mp[i][j]/k;
					}
				}
			}
		} 
		for(int i = 1; i <= r; ++i){
			for(int j = 1; j <= c; ++j){
				mp[i][j] += change[i][j];
				change[i][j] = 0;
			}
		}
	}
	int mn = 1e3, mx = 0;
	for(int i = 1; i <= r; ++i){
		for(int j = 1; j <= c; ++j){
			if(mp[i][j] != -1){				
				mn = min(mn, mp[i][j]);
				mx = max(mx, mp[i][j]);
			}
		}
	}
	cout << mn << '\n' << mx << '\n';
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
	 
	           __   __
              __ \ / __
             /  \ | /  \
                 \|/
            _,.---v---._
   /\__/\  /            \
   \_  _/ /              \
     \ \_|           @ __|
      \                \_
       \     ,__/       /
     ~~~`~~~~~~~~~~~~~~/~~~~
*/    

  // Be awesome ! 
  // Sabrina<3
  // u ying u <3 
  // fighting~ 
  // I will fulfill my dreams!
