/**
 *    author: life adventurer
 *    created: 15.06.2022 14:00:00 
**/
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define mp make_pair
#define pb push_bac
#define ll long long
#define pi 3.1415926535 

int main() {
	string s, ans;
	cin >> s;
	int a, b, c;
	for(int j=0; j<s.size()/3; j++){
		a = j;
		b = j+s.size()/3;
		c = j+s.size()*2/3;
		if(s[a] == s[b]){
			ans += s[a];
		}
		else if(s[b] == s[c]){
			ans += s[b];
		}
		else{
			ans += s[c];
		}
	}
	cout << ans << '\n';
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
