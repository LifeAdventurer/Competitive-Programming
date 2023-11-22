#include <iostream>
using namespace std;
int a[200000];
int main(){
	int t, n, m, b; 
	long long s;
	cin >> t;
	while(t--){
		s=0;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		cin >> m;
		for(int i=0;i<m;i++){
			cin >> b;
			s+=b;
		}
		cout << a[s%n] << '\n';
		for(int i=0;i<200001;i++){
			a[i]=0;
		}
	}
	return 0;
}
