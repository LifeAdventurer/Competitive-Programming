#include <iostream>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	if(n%2==0){
		for(int i=0;i<n/2;i++){
			for(int m=0;m<k;m++){
				for(int j=0;j<n/2;j++){
					for(int l=0;l<k;l++){
						cout << "*";
					}
					for(int l=0;l<k;l++){
						cout << " ";
					}
				}
				cout << '\n';
			}
			for(int m=0;m<k;m++){
				for(int j=0;j<n/2;j++){
					for(int l=0;l<k;l++){
						cout << " ";
					}
					for(int l=0;l<k;l++){
						cout << "*";
					}
				}
				cout << '\n';
			}
		}
	}
	else{
		for(int i=0;i<n/2;i++){
			for(int m=0;m<k;m++){
				for(int j=0;j<n/2;j++){
					for(int l=0;l<k;l++){
						cout << "*";
					}
					for(int l=0;l<k;l++){
						cout << " ";
					}
				}
				for(int l=0;l<k;l++){
						cout << "*";
			    }
				cout << '\n';
			}
			for(int m=0;m<k;m++){
				for(int j=0;j<n/2;j++){
					for(int l=0;l<k;l++){
						cout << " ";
					}
					for(int l=0;l<k;l++){
						cout << "*";
					}
				}
				for(int l=0;l<k;l++){
						cout << " ";
			    }
				cout << '\n';
			}
		}
		for(int m=0;m<k;m++){
			for(int j=0;j<n/2;j++){
				for(int l=0;l<k;l++){
					cout << "*";
				}
				for(int l=0;l<k;l++){
					cout << " ";
				}
			}
			for(int l=0;l<k;l++){
				cout << "*";
		    }
			cout << '\n';
		}
	}
	return 0;
} 
