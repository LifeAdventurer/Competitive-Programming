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

int num[105];
int ary[105];

int main() {
	int k, m;
	bool ok;
	while(cin >> k && k != 0){
		ok = true;
		cin >> m;
		for(int i=0; i<k; i++){
			cin >> num[i];
		}
		int c, r;
		while(m--){
			cin >> c >> r;
			for(int i=0; i<c; i++){
				cin >> ary[i];
			}
			int cnt = 0;
			for(int i=0; i<c; i++){
				for(int j=0; j<k; j++){
					if(ary[i] == num[j]){
						cnt++;
					}	
				}
			}
			if(cnt < r){
				ok = false;
			}
		}
		if(ok){
			cout << "yes" << '\n';
		}	
		else{
			cout << "no" << '\n';
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
