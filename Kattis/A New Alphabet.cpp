#include <iostream>
using namespace std;
char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string b[26] = {"@","8","(","|)","3","#","6","[-]","|","_|","|<","1","[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"};
int main(){
	string s;
	getline(cin, s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]+=32;
		}
	}
	bool ok;
	for(int i=0;i<s.size();i++){
		ok = true;
		for(int j=0;j<26;j++){
			if(s[i]==a[j]){
				ok = false;
				cout << b[j];
			}	
		}
		if(ok){
			cout << s[i];
		}
	}
	cout << '\n';
	return 0;
}
