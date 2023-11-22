#include <iostream>
using namespace std;
int m[305], s[1000005];
int main(){
	int n, ans;
	bool ok=true;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> m[i];
	}
	for(int i=1;i<1000000;i++){
		ok = true;
		for(int j=0;j<n;j++){
			if(s[m[j]%i]==i){
				ok = false;
				break;
			}
			s[m[j]%i]=i;
		}
		if(ok){
			ans=i;
			break;
		}
	}
	cout << ans << '\n';
}
