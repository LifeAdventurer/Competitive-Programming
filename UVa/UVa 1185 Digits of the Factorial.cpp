/**
 *    author: life adventurer
 *    created: 03.06.2022 00:42:43  
**/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	double a, ans, b;
	cin >> n;
	while(n--){
		cin >> a; 
		ans = 0.5*log10(2*3.141592653589*a) + a*(log10(a)-log10(2.71828182846));  
		cout << (int)ans + 1 << '\n'; 
	} 
	return 0;
}
