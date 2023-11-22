#include <iostream>
using namespace std;

int main(){
	bool first;
	int t, A, F;
	first = true;
	cin >> t;
	while (t--){
		cin >> A >> F;
		
		for (int i=0; i<F; i++){
			if (!first) cout << "\n";
			first = false;
			for (int j=1; j<=A; j++){
				for (int k=1; k<=j; k++){
					cout << j;
				}
				cout << "\n";
			}
			for (int j=A-1; j>=1; j--){
				for (int k=1; k<=j; k++){
					cout << j;
				}
				cout << "\n";
			}
		}
	}
	return 0;
}

