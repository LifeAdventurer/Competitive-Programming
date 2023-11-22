/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 23.07.2022 
 *
 *    mood: ^_^   weather: sunny 
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
		long long n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; ++i){
			cin >> a[i];
		}
		long long p = -1, q = -1;
		for(int i = 0; i < n - 1; ++i){
			if(a[i] > a[i+1]){
				p = i + 1;
				q = a[p];
				break;
			}
		}
		if(p == -1 || p == n - 1){
			cout << "YES\n";
			continue;
		}
		long long lmx;
		for(int i = 0; i < p; ++i){
			if(a[i] > q){
				lmx = a[i];
				break;
			}
		}
		bool ok = false;
		long long rmx = a[p - 1];
		for(int i = p + 1; i < n; ++i){
			if(a[i] >= rmx){
				rmx = a[i];
			}
			else if(a[i] <= lmx && a[i] >= q){
				q = a[i];
			}
			else{
				cout << "NO\n";
				ok = true;
				break;
			}
		}
		if(ok) continue;
		cout << "YES\n";
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
