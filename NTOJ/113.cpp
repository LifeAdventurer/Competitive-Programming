#include <iostream>
using namespace std;
int main(){
	int n;
	string s;
	char c;
	cin >> n >> s >> c;
	for(int i=0;i<s.size();i++){
		if(c=='L'){
			if(s[i+1]=='P'){
				cout << s[i+1] << ".";
				i++;
			}
			else{
				cout << s[i];
			}
		}
		else{
			if(s[i]=='P'){
				cout << "." << s[i];
				i++;
			}
			else{
				cout << s[i];
			}
		}
	}
	cout << '\n';
	return 0;
}
