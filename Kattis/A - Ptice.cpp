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
	int n, a = 0, b = 0, c = 0;
	string s, A = "ABC", B = "BABC", C = "CCAABB";
	cin >> n >> s;
	for(int i=0; i<s.size(); i+=3){
		for(int j=0; j<3; j++){
			if(s[i+j%3] == A[j]){
				a++;
			}
		}
	}
	for(int i=0; i<s.size(); i+=4){
		for(int j=0; j<4; j++){
			if(s[i+j%4] == B[j]){
				b++;
			}
		}
	}
	for(int i=0; i<s.size(); i+=6){
		for(int j=0; j<6; j++){
			if(s[i+j%6] == C[j]){
				c++;
			}
		}
	}
	int l;
	if(a >= b){
		if(a >= c){
			l = a;
		}
		else{
			l = c;
		}
	}
	else{
		if(b >= c){
			l = b;
		}
		else{
			l = c;
		}
	}
	cout << l << '\n';
	if(a == l){
		cout << "Adrian" << '\n';
	}
	if(b == l){
		cout << "Bruno" << '\n';
	}
	if(c == l){
		cout << "Goran" << '\n';
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
