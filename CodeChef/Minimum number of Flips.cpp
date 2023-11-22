/**
 *    author: life adventurer
 *    created: 08.06.2022 22:57:57
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int n, p = 0, q = 0, a;
		cin >> n;
		while(n--){
			cin >> a;
			if(a == 1){
				p++;
			}
			else{
				q++;
			}
		}
		if(p<q){
			swap(p, q);
		}
		if((p-q)%2 == 0){
			cout << (p-q)/2 << '\n';
		}
		else{
			cout << "-1" << '\n';
		}
	}
	return 0;
}
