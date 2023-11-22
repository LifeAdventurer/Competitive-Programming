/**
 *    author: life adventurer
 *    created: 01.06.2022 23:29:13   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, n, k;
	cin >> tt;
	while(tt--){
		cin >> n >> k;
		if(n%2 == 0){
			cout << "YES" << '\n';
		}
		else if(k == 1){
			cout << "YES" << '\n';
		}
		else{
			cout << "NO" << '\n';
		}
	}
	return 0;
}
