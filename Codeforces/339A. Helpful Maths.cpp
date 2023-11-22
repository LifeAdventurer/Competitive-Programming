/**
 *    author: life adventurer
 *    created: 10.06.2022 01:04:22   
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int a = 0, b = 0, c = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '1'){
			a++;
		}
		else if(s[i] == '2'){
			b++;
		}
		else if(s[i] == '3'){
			c++;
		}
	}
	for(int i=0; i<a+b+c; i++){
		if(i<a){
			cout << "1";
			if(i != a+b+c-1){
				cout << "+";
			}
		}
		else if(i<a+b){
			cout << "2";
			if(i != a+b+c-1){
				cout << "+";
			}
		}
		else{
			cout << "3";
			if(i != a+b+c-1){
				cout << "+";
			}
		}
	}
	cout << '\n';
	return 0;
}
