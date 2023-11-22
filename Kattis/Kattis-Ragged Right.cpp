#include <iostream>
using namespace std;
int line[99];
int main(){
	int a = 0, ans = 0, i = 0;
	string s;
    while(getline(cin,s)){
		line[i] = s.size();	
		if(line[a] < line[i]){
			a = i;
		}
		i++;
	}
	for(int j=0;j<i-1;j++){
		ans += (line[a] - line[j]) * (line[a] - line[j]);
	}	
	cout << ans << '\n';
	return 0;
}
