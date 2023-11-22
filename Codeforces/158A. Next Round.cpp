#include <iostream>
using namespace std;
int a[100];
int main(){
	int n, k, ans = 0;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>=a[k-1] && a[i]>0){
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
