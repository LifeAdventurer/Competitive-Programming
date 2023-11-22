/**
 *    author: life adventurer
 *    created: 10.06.2022 22:08:17  
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, ans = 0;
	string s;
	cin >> tt;
	while(tt--){
		cin >> s;
		if(s[0] == '+' || s[1] == '+'){
			ans++;
		}
		else{
			ans--;
		}
	}
	cout << ans << '\n';
	return 0;
}
