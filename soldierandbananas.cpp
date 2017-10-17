#include <cmath>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int cost = 0;
	for(int i=1;i<=w;i++)
	{
		cost += k*i;
	}

	int rest = cost-n;
	if(rest<=0)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<rest<<endl;
	}
	return 0;
}