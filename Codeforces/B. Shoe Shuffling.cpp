/**
 *    author: life adventurer
 *    created: 31.05.2022 20:41:39   
**/
#include <iostream>
#include <algorithm>

using namespace std;

int s[100005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> s[i];
		}
		sort(s,s+n);
		if(s[0] == s[n-1]){
			cout << n << " ";
			for(int i=1;i<=n-1;i++){
				cout << i << " ";
			}
			cout << '\n';
		}
		else{
			cout << "-1" << '\n';
		}
	}
	return 0;
}
