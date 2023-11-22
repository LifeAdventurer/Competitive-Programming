/**
 *    author: life adventurer
 *    created: 03.06.2022 15:25:19 
**/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	double pi = M_PI, e = M_E;
	while(cin >> n >> k){
		double a, b, c, ans;
		a = 0.5*log10(2*pi*n) + n*(log10(n)-log10(e));
		b = 0.5*log10(2*pi*k) + k*(log10(k)-log10(e));
		c = 0.5*log10(2*pi*(n-k)) + (n-k)*(log10(n-k)-log10(e));
		ans = a-b-c;
		cout << (int)ans + 1 << '\n';
	}
	return 0;
}
