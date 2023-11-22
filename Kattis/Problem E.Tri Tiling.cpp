#include <iostream>
using namespace std;
int main(){
	int n, a, b, x;
	while(cin >> n && n!=-1){
		x=0;
		a=1;
		b=3;
		if(n==0){
				cout << "1" << '\n';
		}
		else{
			if(n%2==0){
				for(int i=0;i<n/2-1;i++){
					x=0;
					x=4*b-a;
					a=b;
					b=x;	 
				}
				cout << b << '\n';
			}	
			else{
				cout << "0" << '\n';
			}	
		}
	}
	return 0;
} 
