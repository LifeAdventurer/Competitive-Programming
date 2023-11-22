#include <iostream>
using namespace std;
int main(){
	int n, ans = 0, b = 0;
	string s;
	cin >> n >> s;
	for(int i=0;i<n;i++){
		if(s[b]==s[i+1]){
			ans++;
		}
		else{
			b=i+1;
		}
	}
	cout << ans << '\n';
	return 0;
} 
