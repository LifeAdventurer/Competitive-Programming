#include <iostream>
using namespace std;
int main(){
	int ans = 0, N;
	string s;
	cin >> N;
	while(N--){
		cin >> s;
		for(int i=0;i<s.size()-3;i++){
			if(s[i]=='p' || s[i]=='P'){
				if(s[i+1]=='I' || s[i+1]=='i'){
					if(s[i+2]=='n' || s[i+2]=='N'){
						if(s[i+3]=='k' || s[i+3]=='K'){
							ans++;
							break;
						}
					}
				}
			}
			if(s[i]=='r' || s[i]=='R'){
				if(s[i+1]=='o' || s[i+1]=='O'){
					if(s[i+2]=='s' || s[i+2]=='S'){
						if(s[i+3]=='e' || s[i+3]=='E'){
							ans++;
							break;
						}
					}
				}
			}
		} 
	}
	if(ans==0){
		cout << "I must watch Star Wars with my daughter" << '\n';
	}
	else{
		cout << ans << '\n';
	}
}
