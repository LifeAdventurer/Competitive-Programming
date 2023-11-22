#include <iostream>
#include <algorithm>
using namespace std;
int g[14];
int main(){
	string s;
	for(int i=0;i<5;i++){
		cin >> s;
		if(s[0]=='A'){
			g[1]++;
		}
		else if(s[0]=='T'){
			g[10]++;
		}
		else if(s[0]=='J'){
			g[11]++;
		}
		else if(s[0]=='Q'){
			g[12]++;
		}
		else if(s[0]=='K'){
			g[13]++;
		}
		else{
			g[int(s[0])-48]++;
		}
	}
	sort(g,g+14,greater<int>());
	cout << g[0] << '\n';
	return 0;	
}
