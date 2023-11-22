/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 31.07.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int pre[1000005];

int main() {
	
	u_ying_u_with_whale;
	string s;
	int cases = 1;
	while(cin >> s){
		int n;
		cin >> n;
		pre[0] = (s[0] == '1');
		for(int i = 1; i < s.size(); ++i){
			pre[i] = pre[i - 1] + (s[i] == '1');
		}
		cout << "Case " << cases << ":\n";
		for(int i = 0; i < n; ++i){
			int r, l;
			cin >> r >> l;
			if(r < l) swap(r, l);
			cout << (pre[r] == pre[l - 1] || pre[r] - pre[l - 1] == r - l + 1 ? "Yes" : "No") << '\n';
		}
		++cases;
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
