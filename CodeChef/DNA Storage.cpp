/**
 *    author: life adventurer
 *    created: 15.06.2022 14:00:00 
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define ll long long
#define pi 3.1415926535 

int main() {
	
	int tt;
	cin >> tt;
	
	while (tt--) {
		int n;
		string s;
		cin >> n >> s;
		for(int i=0; i<n/2; i++){
			if(s[i*2] == '0'){
				if(s[i*2+1] == '1'){
					cout << "T";
				}
				else{
					cout << "A";
				}
			}
			else{
				if(s[i*2+1] == '1'){
					cout << "G";
				}
				else{
					cout << "C";
				}
			}
		}
		cout << '\n';
	} 
	Sabrina_is_so_cute;
}
     
/** 
 * common bugs
 * - fastio
 * - int overflow
 * - forgot to initialize data (is 0 the right value? -1, inf, -inf?)
 * - array bounds (indices bigger than MAXN?)
 * - special cases (n=1? graph not connected?)
 * - re-initialize efficiently between test cases
**/ 
  
  // I <3 Sabrina
   
