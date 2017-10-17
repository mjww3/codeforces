#include <stdio.h>	
#include <iostream>
#include <list>

using namespace std;
long long int count(long long int n)
{
	long long int cnt=0;
	while(n!=0)
	{
		n/=10;
		++cnt;
	}
	return cnt;
}
int main()
{
	long long int n;
	cin>>n;
	long long int sum=0;
	for(long long int i=1;i<=n;i++)
	{	
		sum+=count(i);
	}
	cout<<sum<<endl;
	return 0;
}