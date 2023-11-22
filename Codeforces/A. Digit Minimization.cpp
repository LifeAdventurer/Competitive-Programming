#include <iostream>
using namespace std;

int main(){
	int t,a;
	cin >> t;
	string n;
	for(int i=0;i<t;i++){
		cin >> n;
		if(n.size()<3){
			cout << n[1] << "\n";
		}
		else{
			a=0;
			for(int j=0;j<n.size()-1;j++){	
				if(n[a]>n[j+1]){
					a=j+1;
				}
			}
			cout << n[a] << "\n";
		}
	}
	return 0;
}
