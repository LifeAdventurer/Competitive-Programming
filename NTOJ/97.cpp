#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(a+b>0){
		cout << "BUG FREE!" << '\n';
	}
	else{
		cout << "BARRIER BREACHED!" << '\n';
	}
} 
