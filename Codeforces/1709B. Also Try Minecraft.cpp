/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 21.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int a[100005];
long long pre[100005], suf[100005];

int main() {
	
	u_ying_u_with_whale;
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	pre[1] = 0;
	suf[1] = 0;
	for(int i = 2; i <= n; ++i){
		if(a[i] < a[i-1]){
			pre[i] = pre[i-1] + a[i-1]-a[i];
		}
		else pre[i] = pre[i-1];
	}
	for(int i = 1; i <= n/2; ++i){
		swap(a[i], a[n-i+1]);
	}
	for(int i = 2; i <= n; ++i){
		if(a[i] < a[i-1]){
			suf[i] = suf[i-1] + a[i-1]-a[i];
		}
		else suf[i] = suf[i-1];
	}
	int s, t;
	for(int i = 1; i <= m; ++i){
		cin >> s >> t;
		if(s < t){
			cout << pre[t] - pre[s] << '\n';
		}
		else{
			cout << suf[n-t+1] - suf[n-s+1] << '\n';
		}
	}
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
