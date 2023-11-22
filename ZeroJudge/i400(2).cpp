// using deque

#include <bits/stdc++.h>
using namespace std;

bool flip[105];
string s[105];

int main(){
	int m, n, cnt;
	cin >> m >> n;
	string str; 
	for(int i=m-1; i>=0; --i){
		cin >> s[i];
		cnt = 0;
		for(char c: s[i]){
			if(c == '1') cnt++; 
		}
		flip[i] = cnt%2;
	}
	cin >> str;
	deque<char> dq;
	for(char c: str){
		dq.push_back(c);
	}
	for(int i=0; i<m; ++i){
		deque<char> rt;
		for(int j=n-1; j>=0; --j){
			if(s[i][j] - '0'){
				rt.push_back(dq.back());
				dq.pop_back();
			}
			else{
				rt.push_front(dq.back());
				dq.pop_back();
			}
		} 
		if(flip[i]){
			for(int j=0; j<n/2; ++j){
				swap(rt[j], rt[j+(n+1)/2]);
			}
		}
		dq = rt;
	}
	for(int i=0; i<n; ++i){
		cout << dq[i];
	}
	cout << '\n';
} 
