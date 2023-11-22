/** 			 _         ___                       _ 
 *  			| |    _  /  _|                     | |                        _
 *  			| |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____ 
 *	  author:	| |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __| 
 *  			| L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| / 
 *  			L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_| 
 *  
 *	  Life is an adventure. Be adventurous.
 *	
 *	  created: 24.06.2022 
 *
 *	  mood: ^_^ 
 *
**/
#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>

using namespace std;

#define Sabrina_is_cool  ios::sync_with_stdio(false);cin.tie(0)
#define Sabrina_is_cute  int tt;cin>>tt;while(tt--)
#define ll long long
#define F first
#define S second

char graph[5][5];

void encrypted(char a, char b){
	pair <int, int> p, q;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(a == graph[i][j]){
				p.F=i, p.S=j; 
			}
			if(b == graph[i][j]){
				q.F=i, q.S=j;
			}
		}
	} 
	if(p.F == q.F){
		cout << graph[p.F][(p.S+1)%5] << graph[q.F][(q.S+1)%5];
	}
	else if(p.S == q.S){
		cout << graph[(p.F+1)%5][p.S] << graph[(q.F+1)%5][q.S];
	}
	else{
		cout << graph[p.F][q.S] << graph[q.F][p.S];	
	}
}

int main() {
	
	Sabrina_is_cool;
	string key, text;
	getline(cin, key);
	int cnt = 0;
	bool jump;
	for(int k=0; k<key.size(); k++){
		jump = false;
		if(key[k] == ' ') continue; 
		key[k] = (char)((int)key[k]-32);
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				if(key[k] == graph[i][j]){
					jump = true;
					break;
				}
			}
		}
		if(jump) continue; 
		else graph[cnt/5][cnt%5] = key[k];
		cnt++;
	}
	for(int k=0; k<26; k++){
		jump = false;
		if((char)(k+65) == 'Q') continue;
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				if((char)(65+k) == graph[i][j]){
					jump = true;
					break;
				}
			}
		}
		if(jump) continue;
		else graph[cnt/5][cnt%5] = (char)(k+65);
		cnt++;
	}
	getline(cin, text);
	string text2 = "";
	for(int i=0; i<text.size(); i++){
		if(text[i] != ' '){
			text2 += (char)((int)text[i]-32);
		}
	}
	text2 += ' ';
	for(int i=0; i<text2.size()-1; i++){
		if(text2[i] == text2[i+1] || text2[i+1] == ' '){
			encrypted(text2[i], 'X');
		}
		else{
			encrypted(text2[i], text2[i+1]);
			i++;
		}	
	}
	
	cout << '\n';
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
