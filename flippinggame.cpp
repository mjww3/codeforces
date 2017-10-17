#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
using namespace std;
int arr[101];
int dp[101][101];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(i==0 && j==0)
			{
				if(arr[i]==0)
				{
					dp[0][0] = 1;
				}
				else{
					dp[0][0] = -1;
				}
			}
			
		}
	}
}