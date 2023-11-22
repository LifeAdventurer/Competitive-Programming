#include <iostream>
using namespace std;
int main(){
	string c, k;
	cin >> c >> k;
	for(int i=0;i<c.size();i++){
		string m;
		m=c[i]-k[i]+'A';
		if(int(m[0])<'A'){
			m=char(int(m[0])+26);
		}
		k.append(m);
		cout << m;	
	}
	return 0; 
} 
