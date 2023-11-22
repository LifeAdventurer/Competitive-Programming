#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cin >> s;
	sort(s.begin(),s.end());
	int a = s.size();
	for(int i=0;i<s.size();i++){
		if(s[i] == s[i+1]){
			a--;
	    }
	}
	if(a % 2 == 0){
		cout << "CHAT WITH HER!" << '\n';
	}
	else{
		cout << "IGNORE HIM!" << '\n';
	}
	return 0;
}
