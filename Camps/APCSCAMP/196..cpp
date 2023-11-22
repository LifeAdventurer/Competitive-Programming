/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 01.08.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int main() {
	
	u_ying_u_with_whale;
	string s;
	cin >> s;
	vector<int> cnt(26, 0);
	int r = -1, tot = 0, len = 1e7;
	bool ok = false;
	auto erase = [&](char c){
		--cnt[c - 'a'];
		if(!cnt[c - 'a']) --tot;
	};
	auto insert = [&](char c){
		if(!cnt[c - 'a']) ++tot;
		++cnt[c - 'a'];
	};
	int a, b;
	for(int i = 0; i < s.size(); ++i){
		if(i){
			erase(s[i - 1]);
		}
		while(r + 1 < s.size() && tot < 26){
			insert(s[++r]);
		}
		if(tot == 26){
			ok = true;
			if(len > r - i + 1){
				a = i;
				b = r - i + 1;
				len = r - i + 1;
			}
		}
	}
	cout << (ok ? s.substr(a, b) : "QQ") << '\n';
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
  // seorina julie <3
  // NJ <3 
  // fighting~ 
  // I will fulfill my dreams!
