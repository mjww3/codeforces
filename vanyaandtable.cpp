#include <stdio.h>	
#include <iostream>
#include <list>

using namespace std;
int main()
{
	int arr[100][100];
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			arr[i][j]=0;
		}
	}
	int n;
	cin>>n;
	int x1,y1,x2,y2;
	while(n--)
	{
		cin>>x1>>y1>>x2>>y2;
		for(int i=x1-1;i<=x2-1;i++)
		{
			for(int j=y1-1;j<=y2-1;j++)
			{
				arr[i][j]+=1;
			}
		}
	}
	int sum=0;
	for(int i=0;i<100;i++)
		{
			for(int j=0;j<100;j++)
			{
				sum+=arr[i][j];
			}
		}
		cout<<sum<<endl;
		return 0;
}
