/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 06.07.2022 
 *
 *    mood: ^_^   weather: windy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;for(int t = 0; t < tt; t++)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second

int main() {
	
	Sabrina_is_cool;
	int m, x, max_y, a, b, ans1, ans2;
	while(cin >> m && m != 0){
		x = 0, max_y = 0, ans1 = 0, ans2 = 0;
		while(cin >> a >> b && a != -1){
			if(x+a <= m){
				x += a; 
				if(b > max_y){
					max_y = b;
				}
				if(x > ans1){
					ans1 = x;
				} 
			}
			else{
				x = a;
				ans2 += max_y;
				max_y = b;
			}
		}
		ans2 += max_y;
		cout << ans1 << " x " << ans2 << '\n';
	}
	
} 

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/

/* __  __
  //\\//\\
  \\\\////    
   \\\///    passionate 
    \\//
     \/  
*/

  // Be awesome ! 
  // I <3 Sabrina
  // I will fulfill my dreams!
