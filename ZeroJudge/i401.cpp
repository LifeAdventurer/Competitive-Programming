#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;

int a[250005];
pair <int, int> mp[250005];

int main(){
	int n;
	cin >> n;
	int x, y, t;
	for(int i=0; i<n; i++){
		cin >> x >> y >> t;
		mp[i].F = x;mp[i].S = y;
		a[i] = t;
	}
	int cnt = 0, d = 3, p = 0, q = 0;
	while(p >= 0 && p <= 30000 && q <= 30000 && q >= -30000){
		if(d == 3) p++;
		else if(d == 2) q++;
		else if(d == 4) q--;
		else p--;
		for(int i=0; i<n; i++){
			if(mp[i].F == p && mp[i].S == q){
				cnt++;
				if(a[i] == 0){
					if(d == 1) d = 4;
					else if(d == 2) d = 3;
					else if(d == 3) d = 2;
					else d = 1;
				}
				else{
					if(d == 1) d = 2;
					else if(d == 2) d = 1;
					else if(d == 3) d = 4;
					else d = 3;
				}
			}
		}
	}
	cout << cnt << '\n';
} 
