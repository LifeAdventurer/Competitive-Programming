/**
 *    author: life adventurer
 *    created: 10.06.2022 21:16:46   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int ans = 0;
	while(a <= b){
		a *= 3;
		b *= 2;
		ans++;
	}
	cout << ans << '\n';
	return 0;
}
