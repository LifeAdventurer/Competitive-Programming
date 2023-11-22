/**
 *    author: life adventurer
 *    created: 15.06.2022 14:00:00 
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define ll long long
#define pi 3.1415926535 

int gcd( int a, int b ){
    if( b==0 )
        return a;
    return gcd( b, a%b );
}
 
int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int main() {
	
	int tt;
	cin >> tt;
	
	while (tt--) {
		int n, cnt = 0;
		cin >> n;
		for(int i=1; i<n; i++){
			if((gcd(i, n-i) + lcm(i, n-i)) == n){
				cnt++;
			}
		}
		cout << cnt << '\n';
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
   
