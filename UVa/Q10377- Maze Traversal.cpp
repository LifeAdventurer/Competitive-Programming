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

char mp[100][100];
const int N = 0;
const int E = 1;
const int S = 2;
const int W = 3;

int main() {
	
	u_ying_u_with_whale;
	int t;
	cin >> t;
	while(t--){
		int a, b;
		string s;
		cin >> a >> b;
		getline(cin, s);
		for(int i = 1; i <= a; ++i){
			getline(cin, s);
			for(int j = 0; j < b; ++j){
				mp[i][j + 1] = s[j];
			}
		}
		int x, y;
		string order;
		cin >> x >> y;
		s = "";
		while(cin >> order){
			s += order;
			if(order[order.size() - 1] == 'Q') break;
		}
		int dic = 0;
		int dx[4] = {-1, 0, 1, 0};
		int dy[4] = { 0, 1, 0,-1};
		for(int i = 0; i < s.size() - 1; ++i){
			if(s[i] == 'R'){
				++dic;
				dic %= 4;
			}
			else if(s[i] == 'L'){
				dic += 3;
				dic %= 4;
			}
			else if(s[i] == 'F'){
				if(mp[x + dx[dic]][y + dy[dic]] != '*'){
					x += dx[dic];
					y += dy[dic];
				}
			}
		}
		cout << x << " " << y << " ";
		if(dic == N) cout << "N\n";
		else if(dic == E) cout << "E\n";
		else if(dic == W) cout << "W\n";
		else cout << "S\n";
		if(t) cout << '\n'; 
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
