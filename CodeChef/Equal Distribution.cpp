/**
 *    author: life adventurer
 *    created: 08.06.2022 22:52:29
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int a, b;
		cin >> a >> b;
		if((a+b)%2 == 0){
			cout << "YES" << '\n';
		}
		else{
			cout << "NO" << '\n';
		}
	}
	return 0;
}
