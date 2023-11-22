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
#define Sabrina_is_cute  int tt;cin>>tt;for(int t = 0; t < tt; t++)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define p_q priority_queue 

const double q = 100.0;
const double eps = 1e-9;

int main() {
	
	Sabrina_is_cool;
	cout << fixed << setprecision(2);
	int a, b, c;
	for(a = 1; a * 4 <= 2000; ++a){
		for(b = a; a + b * 3 <= 2000; ++b){
			for(c = b; a + b + c * 2 <= 2000; ++c){
				// product, sum
				ll p = a * b * c;
				int s = a + b + c;
				ll d = (1000000 * s) / (p - 1000000);
				
				if(p <= 1000000 || d < c || d + s > 2000){
					continue;
				}
				if(abs((s+d)/q - (p*d)/100000000.0) < eps){
					cout << a/q << " " << b/q << " " << c/q << " " << d/q << '\n';
				}
			}
		}
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
