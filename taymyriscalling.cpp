#include <stdio.h>	
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	int n,m,z;
	cin>>n>>m>>z;
	int arr[10001] = {0};
	int arr1[10001] = {0};
	for(int i=1;i<=z;i++)
	{
		arr[i*m] = 1;
	}
	for(int i=1;i<=z;i++)
	{
		if(arr[i*n+1]==1)
		{
			arr1[i*n+1] = 2;
		}
	}

	int  count = 0;
	for(int i=1;i<=z;i++)
	{
		if(arr1[i]==2)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;

}