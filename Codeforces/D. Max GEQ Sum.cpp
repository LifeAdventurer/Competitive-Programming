/**
 *    author: life adventurer
 *    created: 31.05.2022 23:58:27   
**/
#include <iostream>

using namespace std;

long long a[200005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, n;
	cin >> t;
	bool ok;
	while(t--){
		ok = true;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]>a[i+1] && a[i] < a[i]+a[i+1]){
				ok = false;
			}				
			if(a[i]<=a[i+1] && a[i] < a[i]+a[i+1]){
				ok = false;
			}
		}
		if(ok){
			cout << "YES" << '\n'; 
		}
		else{
			cout << "NO" << '\n';
		}
	}
	return 0;
}
