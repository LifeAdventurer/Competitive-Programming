#include <iostream>
using namespace std;
int main()
{
	int a,b,c,m,n;
	cin >> a >> b >> c; 
	for(int i=0;i<b-a;i++)
	{
		m=a+i;
		if((m%10+m%100/10+m%1000/100+m/1000%10+m/10000)==c)
		{
			cout << m << "\n";
			break;
		}
	}
	for(int j=0;j<b-a;j++)
	{
		n=b-j;
		if((n%10+n%100/10+n%1000/100+n/1000%10+n/10000)==c)
		{
			cout << n;
			break;
		}
	}
	return 0;	
} 
