#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int l,b;
	if(n%a!=0)
	{
		l = n/a+1;
	}
	else{
		l = n/a;
	}
	if(m%a!=0)
	{
		b = m/a+1;
	}
	else{
		b= m/a;
	}
	cout<<l*b<<endl;
	return 0;
}