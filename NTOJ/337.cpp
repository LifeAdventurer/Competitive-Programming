/**
 *    author: life adventurer
 *    created: 11.06.2022 13:04:22   
**/
#include <iostream>

using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			cout << i << "*" << j << "=" << i*j << " ";
		}
		cout << '\n';
	}
	return 0;
}
