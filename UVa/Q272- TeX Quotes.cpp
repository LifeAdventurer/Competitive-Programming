#include <iostream>
using namespace std;

int main(){
	string s;
	int cnt = 0;
	while(getline(cin,s)){
		for(int i=0;i<s.size();i++){
			if(s[i]!='"'){
				cout << s[i];
			}
			else{
				if(cnt%2==1){
					cout << "''";
					cnt++;
				}
				else{
					cout << "``";
					cnt++;
				}
			}
		}	
		cout << '\n';	
	}
	return 0;
}
