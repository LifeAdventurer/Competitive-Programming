/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}
	sort(all(v));
	int m;
	cin >> m;
	while(m--){
		int x;
		cin >> x;
		int ub, lb;
		int l = 0, r = n - 1, mid;
		while(l < r){
			mid = (l + r) / 2;
			if(v[mid] < x){
				l = mid + 1;
			}
			else{
				r = mid;
			}
		}
		lb = r;
		l = 0, r = n - 1, mid;
		while(l < r){
			mid = (l + r) / 2;
			if(v[mid] <= x){
				l = mid + 1;
			}
			else{
				r = mid;
			}
		}
		ub = r;
		cout << ub - lb << '\n';
		//cout << upper_bound(all(v), x) - lower_bound(all(v), x) << '\n';
	}

	return 0;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
