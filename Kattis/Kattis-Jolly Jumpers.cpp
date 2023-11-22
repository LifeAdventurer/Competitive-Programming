#include <iostream>
#include <algorithm> 
using namespace std;
int k[3005],q[3005];
int main(){
	int n, a;
	while(cin >> n){
		a = 0;
		for(int i=0;i<3006;i++){
			k[i]=0;
		}
		for(int i=0;i<n;i++){
			cin >> k[i]; 
		}
		for(int i=0;i<n-1;i++){
			q[i]=k[i]-k[i+1];
			if(q[i]<0){
				q[i]=-q[i];
			}
		}
		sort(q,q+n-1);
		for(int i=0;i<n-1;i++){
			if(q[i]!=i+1){
				cout << "Not jolly" << '\n';
				a++;
				break; 
			}
		}
		if(a==0){
			cout << "Jolly" << '\n'; 
		}
	}
	return 0;
}
