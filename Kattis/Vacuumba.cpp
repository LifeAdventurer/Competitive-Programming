/**
 *    author: life adventurer
 *    created: 05.06.2022 16:27:18   
**/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n;
	while(n--){
		cin >> m;
		double x = 0, y = 0, degree, move, angle = 90;
		for(int i=0; i<m; i++){
			cin >> degree >> move;
			angle += degree;
			x += move*cos(angle*M_PI/180.0);
			y += move*sin(angle*M_PI/180.0);
		}
		cout << fixed << setprecision(7) << x << " " << y << '\n';
	}
	return 0;
}
