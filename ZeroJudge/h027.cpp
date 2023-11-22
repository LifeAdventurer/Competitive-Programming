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
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define priority_queue p_q

int a[105][105], b[200][200];

int main() {
	
	Sabrina_is_cool;
	int s, t, n, m, r;
	
	cin >> s >> t >> n >> m >> r;
	int sum_a = 0;
	for(int i=0; i<s; ++i){
		for(int j=0; j<t; ++j){
			cin >> a[i][j];
			sum_a += a[i][j];
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			cin >> b[i][j];
		}
	}
	int cnt = 0, mins = 1e6;
	for(int i=0; i<=n-s; ++i){
		for(int j=0; j<=m-t; ++j){
			int num = 0;
			int sum = 0;
			for(int k=0; k<s; ++k){
				for(int l=0; l<t; ++l){
					if(a[k][l] != b[i+k][j+l]){
						num++;
					}
					sum += b[i+k][j+l];
				}
			}
			if(num <= r){
				cnt++;
				mins = min(mins, abs(sum_a-sum));
			} 
			
		}
	}
	if(cnt == 0){
		cout << "0\n-1\n";
	}
	else{
		cout << cnt << '\n' << mins << '\n';
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
