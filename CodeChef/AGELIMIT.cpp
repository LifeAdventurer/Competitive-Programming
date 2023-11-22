/**
 *    author: life adventurer
 *    created: 08.06.2022 22:48:14   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int x, y, a;
		cin >> x >> y >> a;
		if(a >= x && a < y){
			cout << "YES" << '\n';
		}
		else{
			cout << "NO" << '\n';
		}
	}
	return 0;
}
