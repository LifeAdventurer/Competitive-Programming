/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.07.2022 
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
#define priority_queue p_q

int a[105];
string s[105];

int main() {
	
	Sabrina_is_cool;
	int t;
	cin >> t;
	while(t--){
		int n, b;
		cin >> n;
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		for(int i=0; i<n; ++i){
			cin >> b >> s[i];
		}
		for(int i=0; i<n; ++i){
			for(int j=s[i].size()-1; j>=0; --j){
				if(s[i][j] == 'D'){
					a[i]++;
					a[i] %= 10;
				}
				else{
					a[i]--;
					if(a[i] < 0){
						a[i] += 10;
					}
				}
			}
			if(i) cout << " ";
			cout << a[i];
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
