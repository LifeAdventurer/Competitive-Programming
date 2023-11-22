/**
 *    author: life adventurer
 *    created: 08.06.2022 23:05:46
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
		if(a%3 == 0 || b%3 == 0){
			cout << "0" << '\n';
		}
		else if((a%3+b%3) == 2 || (a%3+b%3) == 4){
			cout << "1" << '\n';
		}
		else{
			cout << "2" << '\n';
		}
	}
	return 0;
}
