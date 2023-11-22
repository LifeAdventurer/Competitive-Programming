/**
 *    author: life adventurer
 *    created: 04.06.2022 14:42:14   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, f;
	cin >> n;
	while(n--){
		cin >> f;
		long long ans = 0;
		while(f--){
			long long a, b, c;
			cin >> a >> b >> c;
			ans += a*c;
		}
		cout << ans << '\n';
	}
	return 0;
}
