#include <iostream>
using namespace std;
int main(){
	long long a, b;
	while(cin >> a >> b){
		if(a>=b){
			cout << a-b << '\n';
 		}
 		else{
 			cout << b-a	 << '\n';
		}
	}
	return 0;
}
