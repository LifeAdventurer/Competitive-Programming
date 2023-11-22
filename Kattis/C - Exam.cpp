/**
 *    author: life adventurer
 *    created: 08.06.2022 14:46:19
**/
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, ans, s = 0, d = 0;
	string s1, s2;
	cin >> n >> s1 >> s2;
	for(int i=0; i<s1.size(); i++){
		if(s1[i] == s2[i]){
			s++;
		}
		else{
			d++;
		}
	}
	int s2w = s1.size() - n;
	int least = min(s2w, d);
	s2w -= least;
	s += least;
	ans = s - s2w;
	cout << ans << '\n';
	return 0;
}
