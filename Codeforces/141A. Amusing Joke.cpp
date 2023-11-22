/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 20.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int c1[30];
int c2[30];

int main() {
	
	u_ying_u_with_whale;
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	bool ok = false;
	if(s1.size()+s2.size() == s3.size()){
		ok = true;
		for(int i = 0; i < s1.size(); ++i){
			++c1[s1[i]-'A'];
		}
		for(int i = 0; i < s2.size(); ++i){
			++c1[s2[i]-'A'];
		}
		for(int i = 0; i < s3.size(); ++i){
			++c2[s3[i]-'A'];
		}
		for(int i = 0; i < 26; ++i){
			if(c1[i] != c2[i]){
				ok = false;
			}
		}
	}
	cout << (ok ? "YES" : "NO") << '\n';
} 
/*
#include <bits/stdc++.h>
using namespace std;
 
int cnt[256];
 
int main()
{
	string a, b, c;
	cin >> a >> b >> c;
	for (char ch: c) cnt[ch]++; 
	for (char ch : a) cnt[ch]--;
	for (char ch : b) cnt[ch]--;
	if (*min_element(cnt, cnt + 256) < 0 ||
		*max_element(cnt, cnt + 256) > 0) cout << "NO\n";
	else cout << "YES\n";
}
*/ 

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

/*
       ___     _         ___ 
      /   \   / \_|     /   \
      \___/   \_/_|     \___/
     _______   ___|    _______
       ||     /   \      ||
       ||     \___/      ||  
	 
	           __   __
              __ \ / __
             /  \ | /  \
                 \|/
            _,.---v---._
   /\__/\  /            \
   \_  _/ /              \
     \ \_|           @ __|
      \                \_
       \     ,__/       /
     ~~~`~~~~~~~~~~~~~~/~~~~
*/    

  // Be awesome ! 
  // Sabrina<3
  // u ying u <3 
  // fighting~ 
  // I will fulfill my dreams!
