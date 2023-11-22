/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.07.2022 
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

char c[50][50];

int main() {
	
	Sabrina_is_cool;
	string a, b;
	cin >> a >> b;
	for(int i=0; i<30; ++i){
		for(int j=0; j<30; ++j){
			c[i][j] = '.';
		}
	}
	int x, y;
	bool ok = false;
	for(int i=0; i<a.size(); ++i){
		for(int j=0; j<b.size(); ++j){
			if(a[i] == b[j]){
				ok = true;
				x = j;
				y = i;
				break;	
			}
		}
		if(ok) break;
	}
	for(int i=0; i<a.size(); ++i){
		c[x][i] = a[i]; 
	}
	for(int j=0; j<b.size(); ++j){
		c[j][y] = b[j];
	}
	for(int i=0; i<b.size(); ++i){
		for(int j=0; j<a.size(); ++j){
			cout << c[i][j];
		}
		cout << '\n';
	}
	cout << '\n';
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
