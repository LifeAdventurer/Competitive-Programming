// only syntax method

#include <bits/stdc++.h>
using namespace std;

string s[105];

string cut(string s2, int n){
	if(n%2 == 0){
		for(int i=0; i<n/2; i++){
			swap(s2[i], s2[i+n/2]);
		}
		return s2;
	}
	else{
		for(int i=0; i<n/2; i++){
			swap(s2[i], s2[i+n/2+1]);
		}
		return s2;
	}
}

string decrypt(string s1, string s2){
	string d = "";
	int cnt1 = 1;//, cnt2 = 1;
	for(int i=s1.size()-1; i>=0; i--){
		if(s1[i] == '1'){
			d += s2[s2.size()-cnt1];
			cnt1++;
		}
		else{
			d = s2[s2.size()-cnt1] + d;
			cnt1++;
		}
	}
	return d;
}

int main() {
	int m, n;
	cin >> m >> n;
	string s1, s2;
	for(int i=m-1; i>=0; i--){
		cin >> s[i];
	}
	cin >> s2;
	for(int i=0; i<m; i++){
		int cnt = 0;
		s1 = s[i];
		for(int j=0; j<n; j++){
			if(s1[j] == '1'){
				cnt++;
			}
		}
		s2 = decrypt(s1, s2);
		if(cnt%2 == 1){
			s2 = cut(s2, n);
		}
	}
	cout << s2 << '\n';
}
