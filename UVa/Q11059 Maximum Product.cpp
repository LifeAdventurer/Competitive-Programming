/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 16.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)
#define EOF (-1) 

int s[20];

int main() {
	
	u_ying_u_with_whale;
	int n, Case = 1, mx;
	while(cin >> n){
		if(Case != 1) cout << '\n';
		mx = -1e3;
		for(int i=0; i<n; ++i){
			cin >> s[i];
		}
		int temp;
		for(int i=0; i<n; ++i){
			temp = 1;
			for(int j=i; j<n; ++j){
				temp *= s[j];
				mx = max(mx, temp);
			}
		}
		mx = max(mx, 0);
		cout << "Case #" << Case << ": The maximum product is " << mx << "." << '\n';
		Case++;
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

/*     ___     _         ___ 
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
