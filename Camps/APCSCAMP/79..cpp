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
	int n;
	cin >> n;
	deque<int> dq;
	for(int i = 0; i < n; ++i){
		int a, x;
		cin >> a;
		if(a == 1){
			cin >> x;
			dq.push_back(x);
		}
		else if(a == 2){
			cin >> x;
			dq.push_front(x);
		}
		else if(a == 3){
			if(dq.empty()){
				cout << "error\n";
			}
			else{
				cout << dq.back() << '\n';
			}
		}
		else if(a == 4){
			if(dq.empty()){
				cout << "error\n";
			}
			else{
				cout << dq.front() << '\n';
			}
		}
		else if(a == 5){
			if(dq.empty()){
				cout << "error\n";
			}
			else{
				dq.pop_back();
			}
		}
		else if(a == 6){
			if(dq.empty()){
				cout << "error\n";
			}
			else{
				dq.pop_front();
			}
		}
		else cout << dq.size() << '\n';
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
