#include <iostream>
using namespace std;
int main(){
	double sum = 0, n, a, t;
	cin >> n;
	t=n;
	for(int i=0;i<n;i++){
		cin >> a;
		if(a!=-1){
			sum+=a;
		}
		else{
			t--;
		}
	}
	cout << sum/t << '\n';
	return 0;
}
