#include <iostream>
using namespace std;
int a[26];
int main(){
	int n, b;
	cin >> n;
	string s;
	getline(cin, s);
	for(int i=0;i<n;i++){
		getline(cin, s);
		for(int j=0;j<26;j++){
			a[j]=0;
		}
		for(int j=0;j<s.size();j++){
			if(s[j]>='A' && s[j]<='Z'){
				s[j]= char(int(s[j]+32));
			}
		}
		for(int j=0;j<s.size();j++){
			if(s[j]>='a' && s[j]<='z'){
				a[int(s[j])-97]++;
			}
		}
		b = 0;
		for(int j=0;j<26;j++){
			if(a[j]>=a[b]){
				b = j;
			}
		}
		for(int j=0;j<26;j++){
			if(a[b]==a[j]){
				cout << char(j+97);
			}
		}
		cout << '\n';
	}
	return 0;
}
