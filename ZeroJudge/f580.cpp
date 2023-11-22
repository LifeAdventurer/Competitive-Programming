/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 03.08.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int dice[] = {0, 6, 5, 4, 3, 2, 1};

int main() {
	
	u_ying_u_with_whale;
	int n, m;
	cin >> n >> m;
	vector<int> front(25, 4), up(25, 1), right(25, 2);
	for(int i = 0; i < m; ++i){
		int a, b;
		cin >> a >> b;
		if(b == -1){
			front[a] = dice[front[a]];
			swap(front[a], up[a]); 
		}
		else if(b == -2){
			right[a] = dice[right[a]];
			swap(up[a], right[a]);
		}
		else{
			swap(front[a], front[b]);
			swap(up[a], up[b]);
			swap(right[a], right[b]);
		}
	}
	for(int i = 1; i <= n; ++i){
		cout << up[i] << " \n"[i == n];
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
  // Sabrina <3
  // u ying u <3
  // seorina julie <3
  // NJ <3 
  // fighting~ 
  // I will fulfill my dreams!
