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

int a[1005], b[1005];
bool ok[1005];

int main() {
	
	u_ying_u_with_whale;
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		ok[i] = false;
	}
	for(int i = 1; i <= n; ++i){
		cin >> b[i];
	}
	int math, english;
	while(x--){	
		math = 0;
		for(int i = 1; i <= n; ++i){
			if(!ok[i]){
				math = max(math, a[i]);
			}
		}
		for(int i = 1; i <= n; ++i){
			if(math == a[i] && !ok[i]){
				ok[i] = true;
				break;
			}
		}
	}
	while(y--){
		english = 0;
		for(int i = 1; i <= n; ++i){
			if(!ok[i]){
				english = max(english, b[i]);
			}
		}
		for(int i = 1; i <= n; ++i){
			if(english == b[i] && !ok[i]){
				ok[i] = true;
				break;
			}
		}	
	}
	int sum;
	while(z--){
		sum = 0;
		for(int i = 1; i <= n; ++i){
			if(!ok[i]){
				sum = max(sum, a[i]+b[i]);
			}
		}
		for(int i = 1; i <= n; ++i){
			if(a[i]+b[i] == sum && !ok[i]){
				ok[i] = true;
				break;
			}
		}
	}
	for(int i = 1; i <= n; ++i){
		if(ok[i]){
			cout << i << '\n';
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
