/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 01.07.2022 
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

int main() {
	
	Sabrina_is_cool;
	string s;	
	while(cin >> s && s[0] != '*'){	
		int ans = 0;
		for(int i=0; i<s.size(); i++){
			double cnt = 0;
			while(s[i] != '/'){
				if(s[i] == 'W'){
					cnt += 1;
				}
				else if(s[i] == 'H'){
					cnt += (double)1/2;
				}
				else if(s[i] == 'Q'){
					cnt += (double)1/4;
				}
				else if(s[i]== 'E'){
					cnt += (double)1/8;
				}
				else if(s[i] == 'S'){
					cnt += (double)1/16;
				}
				else if(s[i] == 'T'){
					cnt += (double)1/32;
				}
				else{
					cnt += (double)1/64;
				}
				i++;
			}
			if(cnt == 1){
				ans++;
			}
		}
		cout << ans << '\n';
	}
} 

/**
 *  Your time is limited, so don't waste it living someone else's life. 
 *  Don't be trapped by dogma � which is living with the results of other people's thinking. 
 *  Don't let the noise of others' opinions drown out your own inner voice. 
 *  And most important, have the courage to follow your heart and intuition.
**/

/* __  __
  //\\//\\
  \\\\////    
   \\\///    Coding ~
    \\//
     \/  
*/

  // Be awesome ! 
  // I <3 Sabrina
  // I will fulfill my dreams!
