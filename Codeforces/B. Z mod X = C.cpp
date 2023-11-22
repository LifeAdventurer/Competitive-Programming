#include <iostream>
#define ll long long
using namespace std;
int main(){
	int t,a,b,c,n,z;
	ll x,y;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a >> b >> c;
		z=c;
		n=0;
		for(y=c+b;y<1000000000000000000;y+=c){ 
			for(x=a+b+c;x<1000000000000000000;x+b+c){
				if(x%y==a && y%z==b){
					n++;
					break;
				}
			}
			if(n==1){
				cout << x << " " << y << " " << z << "\n";
				break;
			}
		}
	}
	return 0;
}
