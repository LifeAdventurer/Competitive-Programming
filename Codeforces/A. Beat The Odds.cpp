/**
 *    author: life adventurer
 *    created: 31.05.2022 20:35:00   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, n, odd, even, a;
	cin >> t;
	while(t--){
		cin >> n;
		odd = 0;
		even = 0;
		for(int i=0;i<n;i++){
			cin >> a;
			if(a%2 == 0){
				even++;
			}
			else{
				odd++;
			}
		}
		if(odd >= even){
			cout << even << '\n';
		}
		else{
			cout << odd << '\n';
		}
	} 
	return 0;
}
