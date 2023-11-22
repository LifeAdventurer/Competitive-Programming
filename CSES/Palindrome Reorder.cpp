/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 26.07.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int c[26];

int main() {
	
	u_ying_u_with_whale;
	string s;
	cin >> s;
	for(unsigned int i = 0; i < s.size(); ++i){
		++c[s[i] - 'A'];
	}
	int cnt = 0, m = 0;
	for(int i = 0; i < 26; ++i){
		if(c[i] % 2 == 1){
			++cnt;
			m = i;
		}
	}
	if(cnt > 1){
		cout << "NO SOLUTION\n";
		return 0;
	}
	for(int i = 0; i < 26; ++i){
		for(int j = 0; j < c[i] / 2; ++j){
			cout << char(i + 'A');
		}
	}
	if(cnt == 1) cout << char(m + 'A');
	for(int i = 25; i >= 0; --i){
		for(int j = 0; j < c[i] / 2; ++j){
			cout << char(i + 'A');
		}
	}
	return 0;
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
