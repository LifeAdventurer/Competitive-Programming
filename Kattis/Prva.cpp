/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 23.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;while(tt--)
#define ll long long
#define F first
#define S second

char graph[25][25];
string list1[1000];

int main() {
	Sabrina_is_cool;
	int r, c;
	cin >> r >> c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >> graph[i][j];
		}
	}
	int cnt = 0;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(graph[i][j] != '#'){
				list1[cnt] += graph[i][j];
			}
			else{
				cnt++;
			}
		}
		cnt++;
	}
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			if(graph[j][i] != '#'){
				list1[cnt] += graph[j][i];
			}
			else{
				cnt++;
			}
		}
		cnt++;
	}
	sort(list1, list1+cnt);
	cnt = 0;
	while(list1[cnt].size() < 2){
		cnt++;
	}
	cout << list1[cnt] << '\n';
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
