/**
 *    author: life adventurer
 *    created: 08.06.2022 23:11:24
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int n, ans = 0;
		string s;
		cin >> n >> s;
		if(n == 2){
			cout << "1" << '\n';
		}
		else{
			if(s[0] == '1'){
				ans++;
			}
			for(int i=0; i<n-1; i++){
				if(s[i] == '0' && s[i+1] == '1'){
					ans++;
				}
			}
			if(s[n-2] == '0'){
				ans++;
			}
			cout << ans << '\n';
		} 
	}
	return 0;
}
