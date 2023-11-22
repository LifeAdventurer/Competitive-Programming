#include <iostream>
using namespace std;
string line[9];
int main(){
	int N, a;
	string s;
	cin >> N;
	for(int i=0;i<10;i++){
		line[i]="EMPTY";
	}
	while(N--){
		cin >> s >> a;
		line[a-1]=s;
	} 
	for(int i=0;i<10;i++){
			cout << line[i] << '\n';
	}
	return 0;
}
