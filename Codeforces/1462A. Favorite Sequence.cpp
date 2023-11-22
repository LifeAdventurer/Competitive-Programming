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

int main() {
	
	u_ying_u_with_whale;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int b[n];
		for(int i = 0; i < n; ++i){
			cin >> b[i];
		}
		int r = n - 1, l = 0;
		int ans[n];
		for(int i = 0; i < n; ++i){
			if(i % 2 == 0){
				ans[i] = b[l];
				++l;
			}  
			else{
				ans[i] = b[r];
				--r;
			}
		}
		for(int i = 0; i < n; ++i){
			cout << ans[i] << " \n"[i == n - 1];
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
