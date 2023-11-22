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

bool prime(long long x){
	if(x == 1) return false;
	for(int i=2; i<=sqrt(x); ++i){
		if(x%i == 0) return false;
	}
	return true;
}

set <long long> s;

int main() {
	
	Sabrina_is_cool;
	for(long long i=1; i<=1e6; ++i){
		if(prime(i)){
			s.insert(i*i);
		}
	}
	int n;
	cin >> n;
	while(n--){
		long long a;
		cin >> a;
		cout << (s.count(a) ? "YES" : "NO") << '\n';
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
