/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 09.07.2022 
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

const int MOD = 1e9+7;

int main() {
	
	Sabrina_is_cool;
	bool fs;
	string s = "", l;
	while(getline(cin, l)){
		l += ' ';
		fs = false;
		for(int i=0; i<l.size(); ++i){
			if(l[i] == ' '){
				for(int j=0; j<s.size()/2; ++j){
					swap(s[j], s[s.size()-j-1]);
				}	
				if(fs) cout << " ";
				cout << s;
				fs = true;
				s = "";
				continue;
			}
			else{
				s += l[i];
			} 
		}
		cout << '\n';
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
