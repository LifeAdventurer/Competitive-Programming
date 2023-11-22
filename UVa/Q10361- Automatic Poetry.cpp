/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 11.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define pb push_back

const int FIRST = 1;
const int SECOND = 2;

int main() {
	
	Sabrina_is_cool;
	int n;
	cin >> n;
	string s;
	getline(cin, s);
	while(n--){
		int cnt = 0;
		string l1, l2;
		deque <char> dq1, dq2, dq3, dq4;
		getline(cin, l1);
		getline(cin, l2);
		bool start = false;
		for(int i=0; i<l1.size(); ++i){
			if(l1[i] == '<'){
				start = true;
				continue;
			}
			else if(l1[i] == '>'){
				start = false;
				if(!cnt) cnt = FIRST;
				else if(cnt == FIRST) cnt = SECOND;
				continue;
			}
			else{
				cout << l1[i];
			}
			if(start){
				if(!cnt){
					dq1.pb(l1[i]);
				}
				else if(cnt == FIRST){
					dq3.pb(l1[i]);
				}
			}
			else{
				if(cnt == FIRST){
					dq2.pb(l1[i]);
				}
				else if(cnt == SECOND){
					dq4.pb(l1[i]);
				}
			}
		}
		cout << '\n';
		for(char c : l2){
			if(c == '.') break;
			else cout << c;
		}
		for(int i=0; i<dq3.size(); ++i){
			cout << dq3[i];
		}
		for(int i=0; i<dq2.size(); ++i){
			cout << dq2[i];
		}
		for(int i=0; i<dq1.size(); ++i){
			cout << dq1[i];
		}
		for(int i=0; i<dq4.size(); ++i){
			cout << dq4[i];
		}
		cout << '\n';
	}
} 

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/

/* __  __
  //\\//\\
  \\\\////    
   \\\///    passionate positive
    \\//
     \/  
*/

  // Be awesome ! 
  // I <3 Sabrina
  // I will fulfill my dreams!
