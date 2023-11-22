/**              _         ___                       _ 
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *    Life is an adventure. Be adventurous.
 *
 *    created: 30.07.2022 
 *
 *    mood: OwO   weather: sunny 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define u_ying_u_with_whale  ios::sync_with_stdio(false);cin.tie(0)

int n, k, sum = 0;
int a[505], d[505];

bool check(int x){
	if(sum % x) return 0;
	for(int i = 1; i <= n; ++i){
		d[i] = a[i] % x;
	}
	sort(d + 1, d + n + 1);
	int l = 1, r = n, q = 0;
	while(r > l){
		if(d[r] % x == 0){
			--r;
		}
		else if(d[l] % x == 0){
			++l;
		}
		else{
			int s = min(d[l] % x, x - d[r] % x);
			d[r] += s;
			d[l] -= s;
			q += s;
		}
	} 
	return (q <= k);
}

int main() {
	
	u_ying_u_with_whale;
	cin >> n >> k;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		sum += a[i];
	}	
	for(int i = sum; i >= 1; --i){
		if(check(i)){
			cout << i << '\n';
			break;
		}
	}
	return 0;
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
  // seorina <3 
  // fighting~ 
  // I will fulfill my dreams!
