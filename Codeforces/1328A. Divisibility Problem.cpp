#include <iostream>
using namespace std;
int main(){
	int t,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(a%b==0){
			cout << "0" << '\n';
		}
		else{
			cout << b-a%b << '\n';
		}
	}	
	return 0;
}
