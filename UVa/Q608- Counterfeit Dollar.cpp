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

bool cmp(char c, int j, string l, string r, string x){
	int left = 0, right = 0;
	for(int i = 0; i < l.size(); ++i){
		left += (l[i] == c ? j : 1);
		right += (r[i] == c ? j : 1);
	}
	if(left == right && x == "even") return true;
	if((left > right && x == "up") || (left < right && x == "down")) return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	while(n--){
		vector<string> l(3), r(3), v(3);
		for(int i = 0; i < 3; ++i){
			cin >> l[i] >> r[i] >> v[i];
		}
		vector<string> res{"light", "Never gonna give you up! Never gonna let you down.", "heavy"};
		for(int i = 0; i < 12; ++i){
			for(int j = 0; j <= 2; j += 2){
				bool ok = true;
				for(int k = 0; k < 3; ++k){
					if(!cmp(char('A' + i), j, l[k], r[k], v[k])) ok = false;
				}
				if(ok){
					cout << (char)(i + 'A') << " is the counterfeit coin and it is " << res[j] << ".\n";
				}
			}
		}
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
