/**
 *    author: life adventurer
 *    created: 01.06.2022 15:31:46 
**/
#include <iostream>
#include <iomanip> 

using namespace std;

int s[1005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c;
	double n, avrg, sum, cnt;
	cin >> c;
	while(c--){
		sum = 0, cnt = 0;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> s[i];
			sum += s[i];
		}
		avrg = sum/n;
		for(int i=0; i<n; i++){
			if(s[i] > avrg){
				cnt++;
			}
		}
		cout << fixed; 
		cout << setprecision(3) << cnt/n*100 << "%\n";
	}
	return 0;
}
