#include <iostream>
using namespace std;
int main(){
	string y, p;
	cin >> y >> p;
	if(y[y.size()-1]=='e'){
		cout << y << "x" << p << '\n';
	}
	else if(y[y.size()-1]=='a' || y[y.size()-1]=='i' || y[y.size()-1]=='o' || y[y.size()-1]=='u'){
		for(int i=0;i<y.size()-1;i++){
			cout << y[i];
		}
		cout << "ex" << p << '\n';
	}
	else{
		if(y[y.size()-2]=='e' && y[y.size()-1]=='x'){
			cout << y << p;
		}
		else{
			cout << y << "ex" << p;
		}
	}
	return 0;
}
