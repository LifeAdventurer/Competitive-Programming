/**
 *    author: life adventurer
 *    created: 5.31.2022  12:51:23
**/
#include <iostream>
using namespace std;
int r[50][50];
int main(){
	int m, n, x, y, direction;
	cin >> m >> n;
	char d;
	string s;
	while(cin >> x >> y >> d >> s){
		bool ok = true;
		if(d=='N'){
			direction = 1;
		}
		else if(d=='S'){
			direction = 3;
		}
		else if(d=='E'){
			direction = 2;
		}
		else{
			direction = 4;
		}
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'R'){
				direction++;
			}
			if(s[i] == 'L'){
				direction--;
			}
			if(direction > 4){
				direction-=4;
			}
			else if(direction < 1){
				direction+=4;
			}
			if(s[i] == 'F'){
				if(direction == 1){
					if(y != n){
						y+=1;
					}
					else if(r[x][y] == 0){
						ok = false;
						break;
					}
				}
				if(direction == 2){	
					if(x != m){
						x+=1;
					}
					else if(r[x][y] == 0){
						ok = false;
						break;
					}
				}
				if(direction == 3){
					if(y != 0){
						y-=1;
					}
					else if(r[x][y] == 0){
						ok = false;
						break;
					}
				}
				if(direction == 4){
					if(x != 0){
						x-=1;
					}
					else if(r[x][y] == 0){						
						ok = false;
						break;
					}
				}
			}
		}
		cout << x << " " << y << " ";
		if(direction == 1){
			cout << "N";
		}
		else if(direction == 2){
			cout << "E";
		}
		else if(direction == 3){
			cout << "S";
		}
		else{
			cout << "W";
		}
		if(!ok){
			cout << " LOST";
			r[x][y]=1;		
		}
		cout << '\n';
	}
	return 0; 
} 
