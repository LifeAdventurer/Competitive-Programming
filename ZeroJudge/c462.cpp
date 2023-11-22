/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int n[100005];

int main() {
	
	u_ying_u_with_whale;
	int k;
	string s;
	cin >> k >> s;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] >= 'A' && s[i] <= 'Z') n[i] = 1;
		else n[i] = 0;
	}
	int max_cnt = 0;
	for(int i = 0; i < s.size(); ++i){
		bool ok = true;
		int cnt = 0;
		while(ok){	
			for(int j = 0; j < k-1; ++j){
				if(n[i+cnt+j] != n[i+cnt+j+1]){
					ok = false;
					break;
				}
			}
			if(!ok || i+cnt >= s.size()) break;
			cnt += k;
			if(n[i+cnt-1] == n[i+cnt]) break;
		}
		max_cnt = max(max_cnt, cnt);
	}
	cout << max_cnt << '\n';
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
