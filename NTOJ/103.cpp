#include <iostream>
using namespace std;
int main(){
	string s, p, a, b;
	int e = 0;
	cin >> s >> p >> a >> b;
	for(int i=0;i<s.size();i++){
		if(s[i]!=a[i]){
			e++;
			break;
		}
	}
	for(int i=0;i<p.size();i++){
		if(p[i]!=b[i]){
			e++;
			break;
		}
	}
	if(e==0){
		cout << "GOOD" << '\n';
	}
	else{
		if(e==1){
			cout << "=~=" << '\n';
		}
		else{
			cout << "OTZ" << '\n';
		}
	}
	return 0;
}
