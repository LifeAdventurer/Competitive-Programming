/** 			     _         ___                       _ 
 *  			    | |    _  /  _|                     | |                        _
 *  	    		| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *    author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  	    		| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  		    	L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 25.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define ll long long
#define F first
#define S second

int matrix[15][15], m2[15][15];
int r, c, m;

void rotate(){
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			m2[i][j] = matrix[i][j];
		}
	}
	for(int j=c-1; j>=0; j--){
		for(int i=0; i<r; i++){
			matrix[c-1-j][i] = m2[i][j];
		}
	}
	swap(r, c);
}

void overturn(){
	for(int i=0; i<c; i++){
		for(int j=0; j<r/2; j++){
			swap(matrix[j][i], matrix[r-1-j][i]);
		}
	}
}

int main() {
	Sabrina_is_cool;
	bool ok = true;
	while(cin >> r >> c >> m){
		if(!ok) cout << '\n';
		ok = false;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin >> matrix[i][j];
			}
		}
		int k[m];
		for(int i=0; i<m; i++){
			cin >> k[i];	
		}
		for(int i=0; i<m; i++){
			if(k[m-1-i] == 0) rotate();
			else overturn();
		}
		
		cout << r << " " << c << '\n';
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				if(j){
					cout << " ";
				}
				cout << matrix[i][j];
			}
			cout << '\n';
		}
	}
} 

/* __  __
  //\\//\\
  \\\\////    
   \\\///    Coding ~
    \\//
     \/  
*/

  // I <3 Sabrina
  // I will fulfill my dreams!
