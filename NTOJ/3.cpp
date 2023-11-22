#include <iostream>
using namespace std;
int main(){
	int T,a,b,t;
	cin >> T;
	for(int i=0;i<T;i++){
		cin >> a >> b;
		while(b!=0){
			t=b;
			b=a%b;
			a=t;
		}
		cout << a << "\n";
	}
	return 0;
}
