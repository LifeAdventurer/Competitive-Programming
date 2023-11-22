/**
 *    author: life adventurer
 *    created: 01.06.2022 23:40:52   
**/
#include <iostream>

using namespace std;

void run(){
	long long n, k;
	cin >> n >> k;
	if(k == 1){
		if(n & 1) cout << "ODD\n";
		else cout << "EVEN\n";
	}
	else if(k == 2){
		cout << "ODD\n";
	}
	else{
		cout << "EVEN\n";
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		run();
	}
	return 0;
}
