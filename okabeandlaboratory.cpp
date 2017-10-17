#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[51][51];
	bool value = false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]!=1)
			{
				vector<int> sum1(n);
				vector<int> sum2(n);
				for(int k=0;k<i;k++)
				{
					sum1.push_back(arr[k][j]);
				}
				for(int k=i+1;k<n;k++)
				{
					sum1.push_back(arr[k][j]);
				}
				for(int k=0;k<j;k++)
				{
					sum2.push_back(arr[i][k]);
				}
				for(int k=j+1;k<n;k++)
				{
					sum2.push_back(arr[i][k]);
				}

				for(int k=0;k<sum1.size();k++)
				{
					for(int x=0;x<sum2.size();x++)
					{
						if(sum1[k]+sum2[x]==arr[i][j])
						{
							value=true;
							break;
						}
					}
					if(value==false)break;
				}
				if(value==false)break;
			}
		}
	}
	if(value==true)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}