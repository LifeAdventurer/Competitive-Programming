/**
 *    author: life adventurer
 *    created: 06.06.2022 00:58:36  
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	for(int i=0; i<a.size(); i++){
		if(a[i] >= 'a' && a[i] <= 'z'){
			a[i] = (char)((int)a[i]-32);
		}
		if(b[i] >= 'a' && b[i] <= 'z'){
			b[i] = (char)((int)b[i]-32);
		}
	}
	if(a == b){
		cout << "0" << '\n';
	}
	else if(b>a){
		cout << "-1" << '\n';
	}
	else{
		cout << "1" << '\n';
	}
	return 0;
}
