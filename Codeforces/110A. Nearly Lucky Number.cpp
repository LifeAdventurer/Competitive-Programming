/**
 *    author: life adventurer
 *    created: 11.06.2022 23:44:57   
**/
#include <iostream>
#include <sstream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	int cnt = 0;
	bool ok = true;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '4' || s[i] == '7'){
			cnt++;
		}
	}
	stringstream ss;
	ss << cnt;
	ss >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i] != '4' && s[i] != '7'){
			ok = false;
		}
	}
	if(ok){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
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
