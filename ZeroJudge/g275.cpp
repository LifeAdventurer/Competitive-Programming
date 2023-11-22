/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 15.07.2022 
 *
 *    mood: ^_^   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int a[10], b[10];

int main() {
	
	u_ying_u_with_whale;
	int n;
	cin >> n;
	bool okA, okB, okC;
	for(int i=0; i<n; ++i){
		okA = true, okB = true, okC = true;
		for(int j=0; j<7; ++j){
			cin >> a[j];
		}
		for(int j=0; j<7; ++j){
			cin >> b[j];
		}
		if(a[1] != a[5] || a[1] == a[3] || b[1] != b[5] || b[1] == b[3]){
			cout << "A";
			okA = false;
		}
		if(a[6] != 1 || b[6] != 0){
			cout << "B";
			okB = false;
		}
		if(a[1] == b[1] || a[3] == b[3] || a[5] == b[5]){
			cout << "C";
			okC = false;		
		}
		if(okA && okB && okC){
			cout << "None";
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
