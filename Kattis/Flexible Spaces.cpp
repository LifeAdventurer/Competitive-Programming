#include <iostream>
using namespace std;
int r[100], cnt[100];
int main(){
	int p, w;
	cin >> w >> p;
	for(int i=1;i<=p;i++){
		cin >> r[i];
	}
	r[p+1]=w;
	for(int i=0;i<=p+1;i++){
		for(int j=0;j<=p+1;j++){	
			if(i>=j){
				cnt[r[i]-r[j]]++;
			}
			else{
				cnt[r[j]-r[i]]++;
			}
		}
	}
	for(int i=1;i<=w;i++){
		if(cnt[i]!=0){
			cout << i << " ";
		}
	}
	return 0;
}
