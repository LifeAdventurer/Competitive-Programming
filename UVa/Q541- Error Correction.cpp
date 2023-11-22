/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 22.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int mp[105][105];

int main() {
	
	u_ying_u_with_whale;
	int n;
	while(cin >> n && n != 0){
		int x, y, cnt1 = 0, cnt2 = 0;
		for(int i = 1; i <= n; ++i){
			int sum = 0;
			for(int j = 1; j <= n; ++j){
				cin >> mp[i][j];
				sum += mp[i][j];
			}
			if(sum%2 == 1){
				x = i;
				cnt1++;
			}
		}
		for(int i = 1; i <= n; ++i){
			int sum = 0;
			for(int j = 1; j <= n; ++j){
				sum += mp[j][i];
			}
			if(sum%2 == 1){
				y = i;
				cnt2++;
			}
		}
		if(cnt1 == 0 && cnt2 == 0){
			cout << "OK\n"; 
		}
		else if(cnt1 == 1 && cnt2 == 1){
			cout << "Change bit (" << x << "," << y << ")\n";
		}
		else{
			cout << "Corrupt\n";
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
