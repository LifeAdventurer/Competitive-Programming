/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 14.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;for(int t = 0; t < tt; t++)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define priority_queue p_q

int s[15];

void result(int s, int b){
	if((s == 0 && b == 5) || (s == 2 && b == 0) || (s == 5 && b == 2)){
		cout << "Won";
	}
	else{
		cout << "Lost";
	}
}

int main() {
	
	Sabrina_is_cool;
	int f, n;
	cin >> f >> n;
	s[0] = 1;
	for(int i=1; i<=n; ++i){
		cin >> s[i];
		if(i) cout << " ";
		cout << f;
		if(f != s[i]){
			cout << " : ";
			result(s[i], f);
			cout << " at round " << i << '\n';
			return 0;
		}
		if(s[i] == s[i-1]){
			if(s[i] == 0) f = 5;
			else if(s[i] == 2) f = 0;
			else f = 2; 
		}
		else {
			f = s[i];
		}
	}
	cout << " : Drew at round " << n << '\n';
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

/*
       ___     _         ___ 
      /   \   / \_|     /   \
      \___/   \_/_|     \___/
     _______   ___|    _______
       ||     /   \      ||
       ||     \___/      ||  
	 
*/    

  // Be awesome ! 
  // I <3 Sabrina
  // I will fulfill my dreams!
