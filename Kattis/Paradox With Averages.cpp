#include <iostream>
using namespace std;
int cs[1005], e[1005];
int main(){
	int T, a, b;
	cin >> T; 
	while(T--){
		cin >> a >> b;
		double sum_sc = 0, sum_e = 0;
		int ans = 0;
		for(int i=0;i<a;i++){
			cin >> cs[i];
			sum_sc+=cs[i];
		}
		for(int i=0;i<b;i++){
			cin >> e[i];
			sum_e+=e[i];
		}
		for(int i=0;i<a;i++){
			if(cs[i]<(sum_sc/a) && cs[i]>(sum_e/b)){
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
