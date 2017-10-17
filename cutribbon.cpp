#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int arr[4001];
int dp[4001] = {-1};
int dpfind(int n,int a,int b,int c)
{
	if(n==0)
	{
		return 0;
	}
	if(n<0)
	{
		return -100000005;
	}
	return max(max(1+dpfind(n-a,a,b,c),1+dpfind(n-b,a,b,c)),1+dpfind(n-c,a,b,c));
}
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	cout<<dpfind(n,a,b,c)<<endl;
	return 0;
}