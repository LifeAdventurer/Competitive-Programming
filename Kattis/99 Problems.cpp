#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	if(N%100>=49){
		cout << N/100*100+99 << '\n';
	}
	else if(N/100==0){
		cout << "99" << '\n';
	}
	else{
		cout << (N/100-1)*100+99 << '\n';
	}
	return 0;
}
