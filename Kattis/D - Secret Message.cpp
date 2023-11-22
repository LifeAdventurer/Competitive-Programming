/**
 *    author: life adventurer
 *    created: 08.06.2022 14:30:12  
**/
#include <iostream>
#include <cmath>

using namespace std;

char msg[105][105];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	string s;
	cin >> N;
	while(N--){
		cin >> s;
		for(int i=0; i<100; i++){
			for(int j=0; j<100; j++){
				msg[i][j] = 0;
			}
		}
		int a = 0, size;
		size = (int)ceil(sqrt(s.size()));
		for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				msg[i][j] = s[a];
				a++;
			}
		}
		for(int i=0; i<size; i++){
			for(int j=size-1; j>=0; j--){
				if(msg[j][i] != 0){
					cout << msg[j][i];
				}
			}
		}
		cout << '\n';
	}
	return 0;
}
