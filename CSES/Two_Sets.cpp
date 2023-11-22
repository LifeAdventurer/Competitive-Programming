/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 25.07.2022 
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
	long long n;
	cin >> n;
	if(n * (n + 1) / 2 % 2 == 1){
		cout << "NO" << '\n';
	} 
	else{
		cout << "YES" << '\n';
		if(n % 2 == 0){
			cout << n / 2 << '\n';
			for(int i = 1; i <= n / 4; ++i){
				cout << i << " ";
			}
			for(int i = n - n / 4 + 1; i <= n; ++i){
				cout << i << " \n"[i == n];
			}
			cout << n / 2 << '\n';
			for(int i = n / 4 + 1; i <= n - n / 4; ++i){
				cout << i << " \n"[i == n - n / 4];
			}
		}
		else{
			++n;
			cout << n / 2 - 1 << '\n';
			for(int i = 1; i <= n / 4 - 1; ++i){
				cout << i << " ";
			}
			for(int i = n - n / 4; i < n; ++i){
				cout << i << " \n"[i == n - 1];
			}
			cout << n / 2 << '\n';
			for(int i = n / 4 ; i < n - n / 4; ++i){
				cout << i << " \n"[i == n - n / 4 - 1];
			}
		}
	}
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
  // Sabrina<3
  // u ying u <3 
  // fighting~ 
  // I will fulfill my dreams!
