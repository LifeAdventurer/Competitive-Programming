#include <iostream>
using namespace std;
int main(){
	string s;
	int T=0, C=0, G=0;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='T'){
			T++;
		}
		else{
			if(s[i]=='C'){
				C++;
			}
			else{
				G++;
			}
		}
	}
	if(T>G){
		swap(T, G);
	}
	if(T>C){
		swap(T, C);
	}
	if(C>G){
		swap(C, G);
	}
	cout << C*C+G*G+T*(T+7) << '\n';
	return 0;
}
