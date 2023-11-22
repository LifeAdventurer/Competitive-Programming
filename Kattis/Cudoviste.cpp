#include <iostream>
using namespace std;
char p[50][50];
int main(){
	int R, C, a = 0, b = 0, c = 0, d = 0, e = 0;
	cin >> R >> C;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin >> p[i][j];
		}
	}
	bool ok;
	for(int i=0;i<R-1;i++){
		for(int j=0;j<C-1;j++){
			int m = 0, n = 0;
			ok = true;
			for(int k=0;k<2;k++){
				for(int l=0;l<2;l++){
					if(p[i+k][j+l]=='#'){
						ok = false;
						break;
					}
					else if(p[i+k][j+l]=='X'){
						m++;
					}
					else{
						n++;
					}
				}
				if(!ok){
					break;
				}
			}
			if(ok){
				if(n==4){
					a++;
				}
				else if(m==1){
					b++;
				}
				else if(m==2){
					c++;
				}
				else if(m==3){
					d++;
				}
				else{
					e++;
				}
			}
		}
	}
	cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n';
	return 0;
}
