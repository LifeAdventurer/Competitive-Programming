#include <iostream>
using namespace std;
int n[105];
int main(){
	string s;
	getline(cin, s);
	for(int i=0;i<s.size();i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			cout << s[i];
			i+=2;
		}
		else{
			cout << s[i];
		}
	}
	cout << '\n';
	return 0;
}
