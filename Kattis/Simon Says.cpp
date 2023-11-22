#include <iostream>
using namespace std;

int main(){
	int n;
	char s[11] = {'S','i','m','o','n',' ','s','a','y','s'};
	bool ok=true;
	string l;
	cin >> n;
	getline(cin, l);
	for(int i=0;i<n;i++){
		ok=true;
		getline(cin, l);
		for(int j=0;j<10;j++){
			if(l[j]!=s[j]){
				ok=false;
			}
		}
		if(ok){
			for(int j=10;j<l.size();j++){
				cout << l[j];
			}
		}
		cout << '\n';
	}
	return 0;
}
