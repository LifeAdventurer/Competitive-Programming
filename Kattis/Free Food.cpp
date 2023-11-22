#include <iostream>
using namespace std;
int r[366];
int main(){
	int N, s, t, ans = 0;
	cin >> N;
	while(N--){
		cin >> s >> t;
		for(int i=s;i<=t;i++){
			r[i]=1;
		}
	}
	for(int i=0;i<366;i++){
		if(r[i]!=0){
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
