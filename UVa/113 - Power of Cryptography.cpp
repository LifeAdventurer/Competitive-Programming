/**
 *    author: life adventurer
 *    created: 04.06.2022 01:29:37  
**/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	double p;
	while(cin >> n >> p){
		cout << fixed << setprecision(0) << pow(p, 1.0/n) << '\n';
	}
	return 0;
}
