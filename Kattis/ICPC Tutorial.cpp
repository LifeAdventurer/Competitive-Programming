/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 13.07.2022 
 *
 *    mood: QQ   weather: emo 
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

int main() {
	
	Sabrina_is_cool;
	double m, n, t, p = 1, a;
	cin >> m >> n >> t;
	bool ok = true;
	if(t == 3) p = 4;
	else if(t == 4) p = 3;
	else if(t == 5) p = 2;
	a = n;
	for(int i=1; i<p; ++i){
		n *= a;
		if(m < n) ok = false;
	}
	if(t == 2){
		a = 1;
		for(int i=0; i<n; ++i){
			a *= 2;
			if(m < a){
				ok = false;
				break;
			} 
		}
	} 
	else if(t == 6){
		n *= log2(n);
	}
	else if(t == 1){
		a = n;
		for(int i=1; i<a; ++i){
			n *= i;
			if(m < n){
				ok = false;
				break;
			} 
		}
	}
	if(m < n) ok = false;
	cout << (ok ? "AC" : "TLE") << '\n'; 
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
