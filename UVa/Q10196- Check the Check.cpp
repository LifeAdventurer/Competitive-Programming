/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 28.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops") // 2023/9/7 pragma 03 is so funny ridiculous
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;for(int t = 0; t < tt; t++)
#define ll long long
#define F first
#define S second

char board[10][10];


int main(){
	Sabrina_is_cool;
	bool ok = true;
	int game = 1;
	while(ok){
		ok = false;
		pair <int, int> black, white;
		bool white_check = true, black_check = true;
		
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				cin >> board[i][j];
				if(board[i][j] != '.'){
					ok = true;
				} 	
				if(board[i][j] == 'k'){
					black.F = i; black.S = j;
				}
				if(board[i][j] == 'K'){
					white.F = i; white.S = j;
				}
			}
		}
		if(!ok){
			break;	
		} 
		for(int i=-1; i<2; i++){
			for(int j=-1; j<2; j++){
				if(board[black.F+i][black.S+j] == 'K'){
					black_check = false;
				}
				if(board[white.F+i][white.S+j] == 'k'){
					white_check = false;
				}
			}
		}
		if(board[black.F+1][black.S-1] == 'P' || board[black.F+1][black.S+1] == 'P'){
			black_check = false;
		} 
		if(board[white.F-1][white.S-1] == 'p' || board[white.F-1][white.S+1] == 'p'){
			white_check = false;
		} 
		int x[8] = {-1, -2, -2, -1, 1, 2, 2, 1}, y[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
		for(int i=0; i<8; i++){
			if(board[black.F+x[i]][black.S+y[i]] == 'N'){
				black_check = false;
			}
			if(board[white.F+x[i]][white.S+y[i]] == 'n'){
				white_check = false;
			}
		}
		for(int i=1; i<8; i++){
			if(board[black.F-i][black.S] == 'R' && black.F-i>=0){
				black_check = false;
			}
			if(board[black.F-i][black.S] != '.') {
				break;
			}
		}
		for(int i=1; i<8; i++){
			if(board[black.F+i][black.S] == 'R' && black.F+i<8){
				black_check = false;
			}
			if(board[black.F+i][black.S] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F][black.S-i] == 'R' && black.S-i>=0){
				black_check = false;
			}
			if(board[black.F][black.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F][black.S+i] == 'R' && black.S+i<8){
				black_check = false;
			}
			if(board[black.F][black.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F-i][white.S] == 'r' && white.F-i>=0){
				white_check = false;
			}
			if(board[white.F-i][white.S] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F+i][white.S] == 'r' && white.F+i<8){
				white_check = false;
			}
			if(board[white.F+i][white.S] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F][white.S-i] == 'r' && white.S-i>=0){
				white_check = false;
			}
			if(board[white.F][white.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F][white.S+i] == 'r' && white.S+i<8){
				white_check = false;
			}
			if(board[white.F][white.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F-i][black.S] == 'Q' && black.F-i>=0){
				black_check = false;
			}
			if(board[black.F-i][black.S] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F+i][black.S] == 'Q' && black.F+i<8){
				black_check = false;
			}
			if(board[black.F+i][black.S] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F][black.S-i] == 'Q' && black.S-i>=0){
				black_check = false;
			}
			if(board[black.F][black.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F][black.S+i] == 'Q' && black.S+i<8){
				black_check = false;
			}
			if(board[black.F][black.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F-i][white.S] == 'q' && white.F-i>=0){
				white_check = false;
			}
			if(board[white.F-i][white.S] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F+i][white.S] == 'q' && white.F+i<8){
				white_check = false;
			}
			if(board[white.F+i][white.S] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F][white.S-i] == 'q' && white.S-i>=0){
				white_check = false;
			}
			if(board[white.F][white.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F][white.S+i] == 'q' && white.S+i<8){
				white_check = false;
			}
			if(board[white.F][white.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F-i][black.S-i] == 'B' && black.F-i>=0 && black.S-i>=0){
				black_check = false;
			}
			if(board[black.F-i][black.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F-i][white.S-i] == 'b' && white.F-i>=0 && white.S-i>=0){
				white_check = false;
			}
			if(board[white.F-i][white.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F-i][black.S-i] == 'Q' && black.F-i>=0 && black.S-i>=0){
				black_check = false;
			}
			if(board[black.F-i][black.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F-i][white.S-i] == 'q' && white.F-i>=0 && white.S-i>=0){
				white_check = false;
			}
			if(board[white.F-i][white.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F+i][black.S+i] == 'B' && black.F+i<8 && black.S+i<8){
				black_check = false;
			}
			if(board[black.F+i][black.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F+i][white.S+i] == 'b' && white.F+i<8 && white.S+i<8){
				white_check = false;
			}
			if(board[white.F+i][white.S+i] != '.'){
				break;
			}
		}
		for(int i=1; i<8; i++){
			if(board[black.F+i][black.S+i] == 'Q' && black.F+i<8 && black.S+i<8){
				black_check = false;
			}
			if(board[black.F+i][black.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F+i][white.S+i] == 'q' && white.F+i<8 && white.S+i<8){
				white_check = false;
			}
			if(board[white.F+i][white.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F-i][black.S+i] == 'B' && black.F-i>=0 && black.S+i<8){
				black_check = false;
			}
			if(board[black.F-i][black.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F-i][white.S+i] == 'b' && white.F-i>=0 && white.S+i<8){
				white_check = false;
			}
			if(board[white.F-i][white.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F-i][black.S+i] == 'Q' && black.F-i>=0 && black.S+i<8){
				black_check = false;
			}
			if(board[black.F-i][black.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F-i][white.S+i] == 'q' && white.F-i>=0 && white.S+i<8){
				white_check = false;
			}
			if(board[white.F-i][white.S+i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[black.F+i][black.S-i] == 'B' && black.F+i<8 && black.S-i>=0){
				black_check = false;
			}
			if(board[black.F+i][black.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F+i][white.S-i] == 'b' && white.F+i<8 && white.S-i>=0){
				white_check = false;
			}
			if(board[white.F+i][white.S-i] != '.'){
				break;
			}
		}
		for(int i=1; i<8; i++){
			if(board[black.F+i][black.S-i] == 'Q' && black.F+i<8 && black.S-i>=0){
				black_check = false;
			}
			if(board[black.F+i][black.S-i] != '.'){
				break;
			} 
		}
		for(int i=1; i<8; i++){
			if(board[white.F+i][white.S-i] == 'q' && white.F+i<8 && white.S-i>=0){
				white_check = false;
			}
			if(board[white.F+i][white.S-i] != '.'){
				break;
			} 
		}
		cout << "Game #" << game << ": ";
		if(black_check && white_check){
			cout << "no"; 
		} 
		else if(white_check){
			cout << "black";
		} 
		else{
			cout << "white";
		} 
		cout << " king is in check." << '\n';
		game++;
	}
}

  // I <3 Sabrina
  // I will fulfill my dreams!
