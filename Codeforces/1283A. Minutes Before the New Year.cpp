#include <iostream>
using namespace std;
int main(){
	int t,h,m;
	cin >> t;
	while(t--){
		cin >> h >> m;	
		cout << (24-h)*60-m << '\n';
	}
	return 0;
} 
