#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	char arr[300][300];
	bool visited[300][300];
	for(int i=0;i<300;i++)
	{
		for(int j=0;j<300;j++)
		{
			visited[i][j]=false;
		}
		
	}
	int n;
	bool flag = true;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	char b = arr[1][0];
	char c = arr[0][0];
	if(b==c)
	{
		flag=false;
	}
	for(int i=0;i<n;i++)
	{
		visited[i][i]=true;
		if(arr[i][i]!=c)
		{
			flag = false;
		}
	}
	int x=0;
	for(int i=n-1;i>=0;i--)
	{
		visited[x][i]=true;
		if(arr[x][i]!=c)
		{
			flag=false;
		}
		x++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(visited[i][j]==false)
			{
				if(arr[i][j]!=b)
				{
					flag=false;
				}
			}
		}
	}

	if(flag)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

}