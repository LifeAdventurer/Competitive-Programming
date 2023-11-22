#include <iostream>
using namespace std;
int main()
{
	int n,a,x;
	x=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a;
		x+=a;
	}
	cout << x/n+x*10000/n%10000*0.0001;
	return 0;
} 
