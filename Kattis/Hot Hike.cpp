#include <iostream>
using namespace std;
int t[50];
int main(){
	int n, a = 0, ans1, ans2;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	if(t[0]>=t[2]){
		ans2 = t[0];
	}
	else{
		ans2 = t[2];
	}
	ans1 = 1;
	for(int i=0;i<n-2;i++){
		if(t[i]>t[i+2]){
			if(t[i]<ans2){
				ans2 = t[i];
				ans1 = i+1;
			}
		}
		else{
			if(t[i+2]<ans2){
				ans2 = t[i+2];
				ans1 = i+1;
			}
		}
	}
	cout << ans1 << " " << ans2 << '\n';
	return 0;
}
