#include <iostream>
using namespace std;
int main()
{
	int k,n,w;
	cin >> k >> n >> w;
	if(k*w*(w+1)/2>n)
	{
		cout << k*w*(w+1)/2-n;
	}
	else
	{
		cout << "0";
	}
	return 0;
}
