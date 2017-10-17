#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	long int n,a,b;
	cin>>n>>a>>b;
	b = 2*b;
	vector<long int> arr;
	int count = 0;
	if(n==0)
	{
		count=0;
		cout<<count<<endl;
		return 0;
	}
	while(n--)
	{
		long int g;
		cin>>g;
		arr.push_back(g);
	}

	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]==1 && a>0)
		{
			a--;
		}
		else if(arr[i]==1 && a<=0 && b>0)
		{
			b--;
		}
		else if(arr[i]==2 && b>=2)
		{
			b = b-2;
		}
		else
		{
			if(arr[i]==1)
			{
				count++;
			}
			else if(arr[i]==2)
			{
				count = count+2;
			}
		}	
	}
	cout<<count<<endl;
	return 0;
}