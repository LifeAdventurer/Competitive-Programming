/**
 *    author: life adventurer
 *    created: 11.06.2022 13:04:22   
**/
#include <iostream>

using namespace std;

int main(){
	double a, b, c, d, res, EPS;
	EPS = 1e-7;
	while (cin >> a >> b >> c >> d){

		res = a * d - b * c;
		if (res < 0){
			res = -res;
		}
		if (res >= EPS){
			cout << "1\n";
		}
		else{
			cout << "0\n";
		}
	}
	
	return 0;
}