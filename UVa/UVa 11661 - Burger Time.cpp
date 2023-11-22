/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 10.07.2022 
 *
 *    mood: ^_^   weather: sunny 
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

const int R = 0;
const int D = 1;

int main() {
	
	Sabrina_is_cool;
	int l;
	string s;
	while(cin >> l && l != 0){
		cin >> s;
		int min = 1e9, c, r, d;
		bool fs = true;
		for(int i=0; i<l; ++i){
			if(s[i] == 'Z'){
				min = 0;
			}
			if(s[i] != '.' && fs){
				fs = false;
				if(s[i] == 'R') c = R;
				else c = D;
			} 
			if(s[i] == 'R'){
				if(c == R){
					r = i;
				}
				else{
					r = i;
					if(abs(r-d) < min) min = abs(r-d);
					c = R;
				}
			}
			if(s[i] == 'D'){
				if(c == D){
					d = i;
				}
				else{
					d = i;
					if(abs(r-d) < min) min = abs(r-d);
					c = D;
				}
			}
		}
		cout << min << '\n';
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

  // Be awesome ! 
  // I <3 Sabrina
  // I will fulfill my dreams!
