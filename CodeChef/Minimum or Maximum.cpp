/**
 *    author: life adventurer
 *    created: 08.06.2022 23:37:49
**/
#include <iostream>

using namespace std;

int b[10005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int n, min, max;
		bool ok = true;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> b[i];
		}	
		min = b[0], max = b[0];
		if(n == 1){
			cout << "YES" << '\n';
		}
		else{
			for(int i=0; i<n; i++){
				if(b[i] < max && b[i] > min){
					ok = false;
				}
				if(b[i] >= max){
					max = b[i];
				}
				if(b[i] <= min){
					min = b[i];
				}
			}
			if(ok){
				cout << "YES" << '\n';
			}
			else{
				cout << "NO" << '\n';
			}
		}
		
	}
	return 0;
}
