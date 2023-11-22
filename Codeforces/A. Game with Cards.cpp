#include <iostream>
#include <algorithm>
using namespace std;
int a[50],b[50];
int main(){
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+51);
		cin >> m;
		for(int i=0;i<m;i++){
			cin >> b[i];
		}
		sort(b,b+51);
		if(a[50]>b[50]){
			cout << "Alice\nAlice\n";
		}
		else{
			if(b[50]>a[50]){
				cout << "Bob\nBob\n";
			}
			else{
				cout << "Alice\nBob\n";
			}
		}
		for(int i=0;i<51;i++){
			a[i]=0;
			b[i]=0;
		}
	}
	return 0;
}
