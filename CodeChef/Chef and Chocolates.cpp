/**
 *    author: life adventurer
 *    created: 01.06.2022 22:45:27  
*/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, x, y, z;
	cin >> tt;
	while(tt--){
		cin >> x >> y >> z;
		cout << (x*5 + y*10)/z << '\n';
	}
	return 0;
}
