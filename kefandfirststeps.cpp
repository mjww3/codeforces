#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int arr[100001];
int dp[100001];
int dpfind(int arr[],int n)
{
	dp[0] = 1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>=arr[i-1])
		{
			dp[i] = 1+dp[i-1];
		}
		else{
			dp[i] = 1;
		}
	}
	int max =1;
	for(int i=0;i<n;i++)
	{
		if(dp[i]>max)
		{
			max = dp[i];
		}
	}
	return max;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<dpfind(arr,n)<<endl;
	return 0;

}