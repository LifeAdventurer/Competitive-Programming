/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 31.07.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int main() {
	
	u_ying_u_with_whale;
	string s;
	cin >> s;
	map<char, int> m = {{'A', 10}, {'B', 11}, 
						{'C', 12}, {'D', 13}, 
						{'E', 14}, {'F', 15}, 
						{'G', 16}, {'H', 17}, 
						{'I', 34}, {'J', 18}, 
						{'K', 19}, {'L', 20}, 
						{'M', 21}, {'N', 22}, 
						{'O', 35}, {'P', 23}, 
						{'Q', 24}, {'R', 25}, 
						{'S', 26}, {'T', 27}, 
						{'U', 28}, {'V', 29}, 
						{'W', 32}, {'X', 30}, 
						{'Y', 31}, {'Z', 33}};
	int sum = 0;
	if(m.find(s[0]) != m.end()){
		sum += m[s[0]] % 10 * 9 + m[s[0]] / 10;
	}
	for(int i = 1; i < 9; ++i){
		sum += (s[i] - '0') * (9 - i);
	}
	sum += s[9] - '0';
	cout << (sum % 10 ? "fake\n" : "real\n");
} 

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
**/

/*
       ___     _         ___ 
      /   \   / \_|     /   \
      \___/   \_/_|     \___/
     _______   ___|    _______
       ||     /   \      ||
       ||     \___/      ||  

*/    

  // Be awesome ! 
  // Sabrina <3
  // u ying u <3
  // seorina <3 
  // fighting~ 
  // I will fulfill my dreams!
