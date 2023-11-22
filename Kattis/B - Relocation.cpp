/**
 *    author: life adventurer
 *    created: 15.06.2022 14:00:00 
**/
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

#define Sabrina_is_so_cute  ios::sync_with_stdio(false);cin.tie(0)
#define mp make_pair
#define pb push_bac
#define ll long long
#define pi 3.1415926535 

int p[100005];

int main() {
	int n, q;
	cin >> n >> q;
	int a, b, c;
	for(int i=1; i<=n; i++){
		cin >> p[i];
	}
	for(int i=0; i<q; i++){
		cin >> a >> b >> c;
		if(a == 1){
			p[b] = c;
		}
		else{
			cout << abs(p[c]-p[b]) << '\n';
		}
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
