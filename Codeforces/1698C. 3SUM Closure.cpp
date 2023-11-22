/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 28.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;for(int t = 0; t < tt; t++)
#define ll long long
#define F first
#define S second

int a[200005];

int main() {
	
	Sabrina_is_cool;
	Sabrina_is_cute {
		int n;
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		bool ok = true;
		for(int i=1; i<=n-2; i++){
			for(int j=i+1; j<=n-1; j++){
				for(int k=j+1; k<=n; k++){
					int sum = a[i]+a[j]+a[k];
					bool yes = false;
					for(int l=1; l<=n; l++){
						if(sum == a[l]){
							yes = true;
						}
					}
					if(!yes){
						ok = false;
					}
				}
			}
		}
		if(ok){
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
} 

/* __  __
  //\\//\\
  \\\\////    
   \\\///    Coding ~
    \\//
     \/  
*/

  // I <3 Sabrina
  // I will fulfill my dreams!
