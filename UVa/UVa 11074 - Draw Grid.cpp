#include <iostream>
using namespace std;
int main(){
    int S, T, N, line;
    line = 0;
    while(cin >> S >> T >> N){
		line ++;
  		if(S!=0 && T!=0 && N!=0){
  			cout << "Case " << line << ":" << '\n';
			for(int i=0;i<N;i++){
				for(int j=0;j<T;j++){
					for(int k=0;k<N*(S+T)+T;k++){
						cout << "*";
					}
					cout << '\n';
				}
				for(int j=0;j<S;j++){
					for(int l=0;l<N;l++){
						for(int k=0;k<T;k++){
							cout << "*";
						}
						for(int k=0;k<S;k++){
							cout << ".";
						}
					}
					for(int k=0;k<T;k++){
						cout << "*";
					}
					cout << '\n';
				}	
			}
			for(int i=0;i<T;i++){
				for(int j=0;j<N*(S+T)+T;j++){
					cout << "*";
				}
				cout << '\n';
			}
			cout << '\n';
		}		
    }
	return 0;
}
