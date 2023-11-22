/**
 *    author: life adventurer
 *    created: 31.05.2022 20:06:59
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, w, h, l, c;
	cin >> n >> w >> h;
	c = w*w + h*h;
	while(n--){
		cin >> l;
		if(l*l <= c){
			cout << "DA" << '\n';
		}
		else{
			cout << "NE" << '\n';
		}
	}
	return 0;
}
