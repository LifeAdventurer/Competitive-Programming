/**
 *    author: life adventurer
 *    created: 05.06.2022 01:49:26  
**/
#include <iostream>

using namespace std;

char map[105][105];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, a = 1, cnt;
	bool ok = true;
	while(cin >> n >> m && n != 0){
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> map[i][j];
			}
		}
		if(!ok){
			cout << '\n';
		}
		cout << "Field #" << a << ":" << '\n';
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(map[i][j] == '*'){
					cout << "*";
				}
				else{
					cnt = 0;
					for(int k=i-1; k<i+2; k++){
						for(int l=j-1; l<j+2; l++){
							if(map[k][l] == '*' && k >= 0 && l >= 0 && k <= n-1 && l <= m-1){
								cnt++;
							}
						}
					}
					cout << cnt;
				}
			}
			cout << '\n';
		}
		ok = false;
		a++;
	}
	return 0;
}
