/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 05.08.2022 
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
	int m, n, x;
	cin >> m;
	priority_queue<int> pq;
	for(int i = 0; i < m; ++i){
		cin >> n;
		if(n == 1){
			cin >> x;
			pq.push(x);
		}
		else if(n == 2){
			if(pq.empty()){
				cout << "QQ\n";
			}
			else{
				pq.pop();
			}
		}
		else if(n == 3){
			if(pq.empty()){
				cout << "QQ\n";
			}
			else{
				cout << pq.top() << '\n';
			}
		}
		else{
			cout << pq.size() << '\n';
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
  // Sabrina <3
  // u ying u <3
  // seorina julie <3
  // NJ <3 
  // fighting~ 
  // I will fulfill my dreams!
