/**
 *    author: life adventurer
 *    created: 08.06.2022 14:08:14   
**/
#include <iostream>

using namespace std; 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, a = 0;
	bool f, t;
	string s, ans, r;
	cin >> n;
	while(n--){
		cin >> k;
		f = false, t = false;
		getline(cin, s);
		getline(cin, s); 
		r = s;
		for(int i=0; i<k; i++){
			getline(cin, s);
			if(s == "pea soup"){
				f = true;
			}
			else if(s == "pancakes"){
				t = true;
			}
		}
		if(t && f){
			if(a == 0){
				ans = r;
			}
			a++;
		}		
	}
	if(a == 0){
		cout << "Anywhere is fine I guess" << '\n';
	}
	else{
		cout << ans << '\n';
	}
	return 0;
}
