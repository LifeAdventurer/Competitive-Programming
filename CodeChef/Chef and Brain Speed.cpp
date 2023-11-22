/**
 *    author: life adventurer
 *    created: 01.06.2022 22:31:13   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x, y;
	cin >> x >> y;
	if(y>x){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
	}
	return 0;
}
