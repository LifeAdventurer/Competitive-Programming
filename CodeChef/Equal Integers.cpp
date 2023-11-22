/**
 *    author: life adventurer
 *    created: 01.06.2022 22:52:18
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, x, y;
	cin >> tt;
	while(tt--){
		cin >> x >> y;
		if(x>=y){
			if((x-y)%2 == 0){
				cout << (x-y)/2 << '\n';
			}
			else{
				cout << (x-y+1)/2 + 1 << '\n';
			}
		}
		else{
			cout << y-x << '\n';
		}
	}
	return 0;
}
