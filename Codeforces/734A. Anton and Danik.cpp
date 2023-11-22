/**
 *    author: life adventurer
 *    created: 11.06.2022 13:04:22   
**/
#include <iostream>

using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	int l;
	cin >> l;
	cin >> s;
	int a = 0, d = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'A'){
			a++;
		}
		else{
			d++;
		}
	}
	if(a > d){
		cout << "Anton" << '\n';
	}
	else if(d > a){
		cout << "Danik" << '\n';
	}
	else{
		cout << "Friendship" << '\n';
	}
	return 0;
}
     
// ============== Notes =============== //
// common bugs
// - fastio
// - int overflow (especially intermediate expressions)
// - forgot to initialize data (is 0 the right value? -1, inf, -inf?)
// - array bounds (indices bigger than MAXN?)
// - special cases (n=1? graph not connected?)
// - re-initialize efficiently between test cases
