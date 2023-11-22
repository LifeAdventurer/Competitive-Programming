/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 02.07.2022 
 *
 *	  mood: ^_^   weather: sunny
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

char board[15][15];
int output[10];

int main() {
	Sabrina_is_cool;
	int n;
	cin >> n;
	string s;
	int max_num;
	for(int i=0; i<n; i++){
		cin >> s;
		max_num = 0;
		for(int j=0; j<n; j++){
			if(s[j] > max_num){
				max_num = s[j];
			}
		}
		output[i] = max_num - '1'+1;
	}
	max_num = 0;
	for(int i=0; i<n; i++){
		if(output[i] > max_num){
			max_num = i;
		}
	}
	for(int i=max_num; i<max_num+n; i++){
		cout << output[i%n];
	}
	cout << '\n';
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
