#include <cmath>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a;
		cin>>a;
		long long int cost = 0;
		int total = (a*(a+1))/2;
		long long int itr=0;
		long long int x=0;
		while(itr<a)
		{
			itr = pow(2,x);
			total = total - 2*itr;
			x++;
		}
		cout<<total<<endl;
	}
	return 0;
}