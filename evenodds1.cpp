#include <stdio.h>	
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	long long int n,k;
	cin>>n>>k;
	if(k<=(n+1)/2)
	{
		cout<<k*2-1<<endl;
	}
	else{
		cout<<(k-(n+1)/2)*2<<endl;
	}
	return 0;
}