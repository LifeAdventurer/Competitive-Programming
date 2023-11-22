/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 24.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;while(tt--)
#define ll long long
#define F first
#define S second

double d[50];

int main() {
	
	Sabrina_is_cool;
	char c;
	int cnt = 0;
	while(cin >> c && c != '*'){
		for(int i=0; i<4; i++){
			cin >> d[cnt*4+i]; 
		}
		cnt++;
	}
	double x, y;
	int cnt2 = 0;
	bool ok;
	while(cin >> x >> y && x != 9999.9){
		ok = true;
		for(int i=0; i<cnt+1; i++){
			if(x>d[i*4] && x<d[i*4+2] && y>d[i*4+3] && y<d[i*4+1]){
				cout << "Point " << cnt2+1 << " is contained in figure " << i+1 << '\n';
				ok = false;
			}
		}
		if(ok){
			cout << "Point " << cnt2+1 << " is not contained in any figure";
			if(cnt2+1 != 985) cout << " \n";
		}
		cnt2++;
	}
} 

/** 
 * common bugs
 * - int overflow
 * - forgot to initialize data (is 0 the right value? -1, inf, -inf?)
 * - array bounds (indices bigger than MAXN?)
 * - special cases (n=1? graph not connected?)
 * - re-initialize efficiently between test cases
**/ 

/* __  __
  //\\//\\
  \\\\////    
   \\\///    Coding ~
    \\//
     \/  
*/

  // I <3 Sabrina
  // I will fulfill my dreams!
