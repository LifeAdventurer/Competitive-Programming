/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 03.07.2022 
 *
 *	  mood: ^_^   weather: sunny
 *
**/
#pragma GCC optimize("Ofast,03,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;for(int t = 0; t < tt; t++)
#define ll long long
#define F first
#define S second

void tree(char type, int height){
	int times = 1;
	if(type == 'B') times = 2;
	else if(type == 'C') times = height;
	else if(type == 'D') height *= 10;
	else if(type == 'F') height *= 2;
	else if(type == 'G') height *= 3;
	else if(type == 'H') height *= 7;
	else if(type == 'I') height *= 4, height--;
	for(int i=0; i<times; i++){
		for(int j=0; j<height; j++){
			if(type == 'E') cout << "  ";
			for(int k=0; k<height-j-1; k++){
				cout << " ";
			}
			for(int k=0; k<j*2+1; k++){
				cout << "*";
			}
			cout << '\n';
			if(type == 'C' && i == j) break;
		}
	} 
	if(type == 'E'){
		for(int i=0; i<height*2+3; i++){
			cout << "#";
		}
		cout << '\n';
	}
}

int main() {
	
	Sabrina_is_cool;
	int t;
	char c;
	int n;
	cin >> t;
	for(int i=0; i<t; i++){
		if(i != 0){
			cout << '\n';
		}
		cin >> c >> n;
		tree(c, n);
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
