/**
 *    author: life adventurer
 *    created: 11.06.2022 23:24:31   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	bool ok = true;
	int cnt = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == s[i+1]){
			if(i == 0){
				cnt++;
			}
			cnt++;
		}
		else{
			cnt = 1;
		}
		if(cnt >= 7){
			ok = false;
		}
	}
	if(ok){
		cout << "NO" << '\n';

	}
	else{
		cout << "YES" << '\n';
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
