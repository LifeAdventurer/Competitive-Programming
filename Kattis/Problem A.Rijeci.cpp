#include <iostream>
using namespace std;
int main(){
	int K, a = 0, b = 1, x;
	cin >> K;
	for(int i=1;i<K;i++){
		x=a+b;
		a=b;
		b=x;
	}
	cout << a << " " << b << '\n';
	return 0;
}
