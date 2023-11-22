#include <iostream>
using namespace std;
int main()
{
	int n,a,b,c,x;
	cin >> n;
	x=0;
	for(int i=0;i<n;i++)
	{
		cin >> a >> b >> c;
		if(a+b+c>=2)
		{
			x+=1;
		}	
	} 
	cout << x;
	return 0;	
} 
