#include <iostream>
using namespace std;
int main(){
	int t;
	string d;
	cin >> t >> d;
	for(int i=0;i<d.size();i++){
		cout << char(int(d[i]-38-t)%26+64);
	}
	cout << '\n';
	return 0;
}
