#include <iostream>
using namespace std;
int main()
{
	int x,n;
	n=1;
	cin >> x;
	for(int i=1;i<x;i*=10)
	{
		if((x/i%10)!=0)
		{
			n*=x/i%10;
		}
	}
	x=n;
	while(n>=10)
	{
		n=1;
		for(int i=1;i<x;i*=10)
		{
			if((x/i%10)!=0)
			{
				n*=x/i%10;
			}
		}
		x=n;
	}		
	cout << n;
	return 0;	
} 
