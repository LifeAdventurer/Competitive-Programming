#include <iostream>
using namespace std;
int main(){
	int A_cnt=0,B_cnt=0;
	string s;
	cin >> s;
	for(int i=0;i<s.size();i+=2){
		if(s[i]=='A'){
			A_cnt++;
		}
		else{
			B_cnt++;
		}	
	}
	if(A_cnt>B_cnt){
		cout << "A" << "\n";
	}
	else{
		cout << "B" << "\n";
	}
	return 0;
} 
