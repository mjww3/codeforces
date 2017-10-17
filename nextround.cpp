#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int arr[100];
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	int x = arr[b-1];
	int count = 0;
	for(int i=0;i<a;i++)
	{
		if(arr[i]>=x && arr[i]!=0)
		{
			count++;
		}
	}
	cout<<count<<endl;
return 0;
}