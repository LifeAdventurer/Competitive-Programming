#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int a, b, c;
	cin >> a >> b >> c;
	if(a < b){
		swap(a, b);
	}
	if(b < c){
		swap(b, c);
	}
	if(a < b){
		swap(a, b);
	}
	if(a == c){
		cout << "3 ";
	}
	else if(a == b){
		cout << "2 ";
	}
	else if(b == c){
		cout << "2 ";
	}
	else{
		cout << "1 ";
	}
	cout << a << " ";
	if(a != b){
		cout << b << " ";
	}
	if(b != c){
		cout << c << " ";
	}
	cout << '\n';
}
