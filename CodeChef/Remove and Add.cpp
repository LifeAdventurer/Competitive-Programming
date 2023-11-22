/**
 *    author: life adventurer
 *    created: 01.06.2022 23:08:17   
**/
#include <iostream>

using namespace std;

int ary[100000005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, n, ans, a;
	cin >> tt;
	while(tt--){
		for(int i=0; i<n; i++){
			ary[i]=0;
		}
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a;
			ary[a]++;
		}
		ans = 0;
		for(int i=0; i<100000000; i++){
			if(ary[i]>1){
				ans+=ary[i]-1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
