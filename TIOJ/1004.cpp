/**
 *    author: life adventurer
 *    created: 02.06.2022 11:35:58   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a = 1;
	cin >> n;
	while(n >= a*2){
		a *= 2;
	}
	cout << (n - a)*2 + 1 << '\n';
	return 0;
}
