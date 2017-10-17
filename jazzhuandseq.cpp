#include <cmath>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
long long int a,b;
long long int getvalue(long long int n)
{
	if(n==1)
	{
		return a;
	}
	if(n==2)
	{
		return b;
	}
	return getvalue(n-1)-getvalue(n-2);
}

int main()
{	
	cin>>a>>b;
	long long int n;
	cin>>n;
	long long int answer = ((getvalue(n))%1000000007);
	if(answer<0)
	{
		answer = 1000000007+answer;
	}
	cout<<answer<<endl;
return 0;
}