/**
 *    author: life adventurer
 *    created: 02.06.2022 19:50:17   
**/
#include <iostream>

using namespace std;

int solve(int a, int b){
	if(a<b){
		swap(a,b); 
	}
	int k = a*10 + b;
	if(k == 21){
		return 1000; 
	}
	if(k%11 == 0){
		return k*10;
	}
	return k;
	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c, d, p, q;
	while(cin >> a >> b >> c >> d && a!=0){
		p = solve(a, b);
		q = solve(c, d);
		if (p > q){
			cout << "Player 1 wins.\n";
		} 
		else if (p < q){
			cout << "Player 2 wins.\n";
		} 
		else {
			cout << "Tie.\n";
		}
	}
	return 0;
}
