#include <iostream>
using namespace std;

int main(){
	char c;
	while(cin >> c){
		if(c >= 'A' && c <= 'Z'){
			cout << c;
		}
	}
	return 0;	
}
