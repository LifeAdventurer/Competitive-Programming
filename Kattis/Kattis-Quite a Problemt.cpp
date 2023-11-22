#include <iostream>
using namespace std;
int main(){
	string s;
	bool ok=true;
	while(getline(cin, s)){
		ok=true;
		for(int i=0;i<s.size();i++){
			if(s[i]=='P' || s[i]=='p'){
				if(s[i+1]=='R' || s[i+1]=='r'){
					if(s[i+2]=='O' || s[i+2]=='o'){
						if(s[i+3]=='B' || s[i+3]=='b'){
							if(s[i+4]=='L' || s[i+4]=='l'){
								if(s[i+5]=='E' || s[i+5]=='e'){
									if(s[i+6]=='M' || s[i+6]=='m'){
										cout << "yes" << '\n';
										ok=false;
										break;
									}
								}	
							}
						}
					}
				}
			}
		}	
		if(ok){
			cout << "no" << '\n';
		}	
	}
	return 0;
}
