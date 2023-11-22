/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 27.06.2022 
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

char board[55][55];

int main() {
	
	Sabrina_is_cool;
	Sabrina_is_cute {
		int m, n;
		cin >> m >> n;
		if(t != 0) cout << '\n';
		bool ok = false;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin >> board[i][j];
				if(board[i][j] >= 'a' && board[i][j] <= 'z'){
					board[i][j] -= 32;
				}
			}
		}
		int w;
		cin >> w;
		string s;
		while(w--){
			int x, y, min = 100;
			cin >> s;
			for(int i=0; i<s.size(); i++){
				if(s[i] >= 'a' && s[i] <= 'z'){
					s[i] -= 32;
				}
			}
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					if(board[i][j] == s[0]){
						if(s.size() == 1 && (i+j)<min){
							x = i; 
							y = j;
							min = i+j;
						} 
						else{					
							for(int k=-1; k<2; k++){
								for(int l=-1; l<2; l++){
									ok = false;
									if(!(k == 0 && l == 0) && board[i+k][j+l] == s[1]){
										for(int len=2; len<s.size(); len++){
											if(board[i+k*len][j+l*len] != s[len]){
												ok = true; 
												break;
											} 
										}				
										if((i+j)<min && !ok){
											x = i; 
											y = j; 
											min = i+j;
										}
									}										
								}
							}	
						}
					}
				}
			}	
			cout << x+1 << " " << y+1 << '\n';
		}
		for(int i=0; i<50; i++){
			for(int j=0; j<50; j++){
				board[i][j] = ' ';
			}
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
