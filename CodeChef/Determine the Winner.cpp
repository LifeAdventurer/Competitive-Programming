/**
 *    author: life adventurer
 *    created: 01.06.2022 22:56:28   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, a, b, c, d;
	cin >> tt;
	while(tt--){
		cin >> a >> b >> c >> d;
		if(a<b){
			swap(a, b);
		}
		if(c<d){
			swap(c, d);
		}
		if(a == c){
			cout << "TIE" << '\n';
		}
		else if(a > c){
			cout << "Q" << '\n';
		}
		else{
			cout << "P" << '\n';
		}
	}
	return 0;
}
