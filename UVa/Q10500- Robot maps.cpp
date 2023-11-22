/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 30.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;for(int t = 0; t < tt; t++)
#define ll long long
#define F first
#define S second

char house[15][15], ans[15][15];
int check[15][15];

int main() {
	
	Sabrina_is_cool;
	int n, m;
	while(cin >> n >> m){
		if(n==0 && m==0){
			break;
		} 
		int x, y, move = 0;
		cout << '\n';
		cin >> x >> y;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				check[i][j] = 0;
			}
		}
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> house[i][j];
				ans[i][j] = '?';
			}
		}
		ans[x][y] = '0';
		check[x][y] = 1;
		while((check[x][y+1]!=1 && y<m) || (check[x+1][y]!=1 && x<n) || (check[x][y-1]!=1 && y>1) || (check[x-1][y]!=1 && x>1)){
			ans[x-1][y] = house[x-1][y];
			if(ans[x-1][y] == 'X'){
				check[x-1][y] = 1;
			}
			ans[x+1][y] = house[x+1][y];
			if(ans[x+1][y] == 'X'){
				check[x+1][y] = 1;
			}
			ans[x][y-1] = house[x][y-1];
			if(ans[x][y-1] == 'X'){
				check[x][y-1] = 1;
			}
			ans[x][y+1] = house[x][y+1];
			if(ans[x][y+1] == 'X'){
				check[x][y+1] = 1;
			}
			if(x > 1 && check[x-1][y] == 0){
				x--; move++;
			}
			else if(y < m && check[x][y+1] == 0){
				y++; move++;
			}
			else if(x < n && check[x+1][y] == 0){
				x++; move++;
			}
			else if(y > 1 && check[x][y-1] == 0){
				y--; move++;
			}
			check[x][y] = 1;
		}
		cout << "|";
		for(int i=0; i<m; i++){
			cout << "---|";
		}
		cout << '\n';
		for(int i=1; i<=n; i++){
			cout << "|";
			for(int j=1; j<=m; j++){
				cout << " " << ans[i][j] << " |";
			}
			cout << "\n|";
			for(int j=0; j<m; j++){
				cout << "---|";
			}	
			cout << '\n';
		}
		cout << "\nNUMBER OF MOVEMENTS: " << move << '\n';
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
