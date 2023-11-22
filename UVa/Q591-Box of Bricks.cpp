#include <iostream>
using namespace std;
int r[51];
int main(){
	int n, ans, sum, avrg, set = 1;
	while(cin >> n && n!=0){
		ans = 0, sum = 0;
		for(int i=0;i<n;i++){
			cin >> r[i];
			sum+=r[i];
		}
		avrg=sum/n;
		for(int i=0;i<n;i++){
			if(r[i]>avrg){
				ans+=r[i]-avrg;
			}
		}
		cout << "Set #" << set << '\n' << "The minimum number of moves is " << ans << "." << '\n' << '\n';
		set++;
	}
	return 0;
}
