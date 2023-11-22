/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 12.07.2022 
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

int main() {
	
	Sabrina_is_cool;
	int n, p = 0, q = 0;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		if(a == 0){
			if(b == 2){
				p++;
			}
			else if(b == 5){
				q++;
			}
		}
		else if(b == 0){
			if(a == 2){
				q++;
			}
			else if(a == 5){
				p++;
			}
		}
		else if(a == 2 && b == 5){
			p++;
		} 
		else if(a == 5 && b == 2){
			q++;
		}
	}
	if(p == q){
		cout << "The referee wins." << '\n';
	}
	else if(p > q){
		cout << "The prince wins." << '\n';
	}
	else{
		cout << "The princess wins." << '\n';
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
