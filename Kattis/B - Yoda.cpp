/**
 *    author: life adventurer
 *    created: 13.07.2022 17:21:56   
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie;

int main(){
	int a = 0, b = 0;
	string s1, s2, ans1, ans2;
	cin >> s1 >> s2;
	if(s1.size() > s2.size()){
		a = s1.size()-s2.size();
		for(int i=0; i<a; i++){
			ans1 += s1[i];
		}
	}
	else if(s1.size() < s2.size()){
		b = s2.size()-s1.size();
		for(int i=0; i<b; i++){
			ans2 += s2[i];
		}
	}
	int c = min(s1.size(), s2.size());
	for(int i=0; i<c; i++){
		if(s1[i+a] > s2[i+b]){
			ans1 += s1[i+a];
		}
		else if(s1[i+a] < s2[i+b]){
			ans2 += s2[i+b];
		}
		else{
			ans1 += s1[i+a];
			ans2 += s2[i+b];
		}
	}
	while(ans1[0] == '0' && ans1.size() > 1){
		ans1.erase(0, 1);	
	}
	while(ans2[0] == '0' && ans2.size() > 1){
		ans2.erase(0, 1);
	}
	cout << (ans1.size() ? ans1 : "YODA") << '\n';
	cout << (ans2.size() ? ans2 : "YODA") << '\n';
}
