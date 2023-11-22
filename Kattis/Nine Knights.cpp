/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.07.2022 
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
#define p_q priority_queue 

char c[10][10];

int main() {
	
	Sabrina_is_cool;
	string s;
	for(int i=2; i<7; ++i){
		for(int j=2; j<7; ++j){
			cin >> c[i][j];
		}
	}
	int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1}; 
	int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};
	bool ok = true;
	int cnt = 0;
	for(int i=2; i<7; ++i){
		for(int j=2; j<7; ++j){
			if(c[i][j] == 'k'){
				cnt++;
				for(int k=0; k<8; ++k){
					if(c[i+dx[k]][j+dy[k]] == 'k'){
						ok = false;
					}
				}
			}
		}
	}
	cout << (ok && cnt == 9 ? "valid" : "invalid") << '\n';
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
