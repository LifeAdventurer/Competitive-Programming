/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.07.2022 
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

char b[250][250];

int main() {
	
	Sabrina_is_cool;
	int n, max = 0;
	cin >> n;
	string s;
	for(int i=0; i<n; ++i){
		cin >> s;
		for(int j=0; j<s.size(); ++j){
			if(s[j] >= 'A' && s[j] <= 'Z'){
				b[i][j] = s[j];
			}
		}
		if(s.size() > max) max = s.size();
	}
	for(int i=0; i<max; ++i){
		for(int j=0; j<n; ++j){
			if(b[j][i] >= 'A' && b[j][i] <= 'Z'){
				cout << b[j][i];
			}
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
   \\\///    passionate 
    \\//
     \/  
*/

  // Be awesome ! 
  // I <3 Sabrina
  // I will fulfill my dreams!
