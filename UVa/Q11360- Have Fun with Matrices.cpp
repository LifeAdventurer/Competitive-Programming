/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 28.07.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int mp[15][15];

int main() {
	
	u_ying_u_with_whale;
	int t;
	cin >> t;
	for(int c = 1; c <= t; ++c){
		int n, l;
		cin >> n;
		for(int i = 1; i <= n; ++i){
			cin >> l;
			for(int j = n; j >= 1; --j){
				mp[i][j] = l % 10;
				l /= 10;
			}
		}
		int m;
		string s;
		cin >> m;
		for(int i = 0; i < m; ++i){
			cin >> s;
			int a, b;
			if(s == "transpose"){
				for(int i = 1; i <= n; ++i){
					for(int j = i; j <= n; ++j){
						swap(mp[i][j], mp[j][i]);
					}
				}
			}
			else if(s == "inc"){
				for(int i = 1; i <= n; ++i){
					for(int j = 1; j <= n; ++j){
						++mp[i][j];
						mp[i][j] %= 10;
					}
				}
			}
			else if(s == "dec"){
				for(int i = 1; i <= n; ++i){
					for(int j = 1; j <= n; ++j){
						mp[i][j] += 9;
						mp[i][j] %= 10;
					}
				}
			}
			else if(s == "row"){
				cin >> a >> b;
				for(int i = 1; i <= n; ++i){
					swap(mp[a][i], mp[b][i]);
				}
			}
			else if(s == "col"){
				cin >> a >> b;
				for(int i = 1; i <= n; ++i){
					swap(mp[i][a], mp[i][b]);
				}
			}
		}
		cout << "Case #" << c << '\n';
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				cout << mp[i][j];
			}	
			cout << '\n';
		}
		cout << '\n';
	}
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
