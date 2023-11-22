#include <iostream>
using namespace std;
int main(){
	int b, d, c, l, a;
	a=0;
	cin >> b >> d >> c >> l;
	for(int i=0;i<=l;i+=b){
		for(int j=0;j<=l;j+=d){
			for(int k=0;k<=l;k+=c){
				if((i+j+k)==l){
					a++;
					cout << i/b << " " << j/d << " " << k/c << '\n';
				}
			}
		}
	}
	if(a==0){
		cout << "impossible" << '\n';
	}
	return 0;
}
