#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int n,m,a,b;
	int diff;
	cin>>n>>m>>a>>b;
	int cost=0;
	if(b<a*m)
	{
		diff = n%m;
		if(diff*a<b)
		{
			cost = (n/m)*b+(n%m)*a;
		}
		else{
			cost = (n / m + 1) * b;
		}
	}
	else
	{
		cost = n*a;
	}
	cout<<cost<<endl;
	return 0;
}