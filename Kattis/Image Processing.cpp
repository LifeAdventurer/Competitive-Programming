/**
 *    author: life adventurer
 *    created: 04.06.2022 00:42:14   
**/
#include <iostream>

using namespace std;

int image[25][25], kernel[25][25], output[25][25];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int h, w, n, m;
	cin >> h >> w >> n >> m;
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cin >> image[i][j];
		}
	}
	for(int i=n-1; i>=0; i--){
		for(int j=m-1; j>=0; j--){
			cin >> kernel[i][j];
		}
	}
	for(int i=0; i<h-n+1; i++){
		for(int j=0; j<w-m+1; j++){
			for(int k=0; k<n+i; k++){
				for(int l=0; l<m+i; l++){
					output[i][j]+=kernel[k][l]*image[i+k][j+l];
				} 
			}
		}
	}
	for(int i=0; i<h-n+1; i++){
		for(int j=0; j<w-m+1; j++){
			cout << output[i][j] << " ";
		}
		cout << '\n';
	}
	cout << '\n';
	return 0;
}
