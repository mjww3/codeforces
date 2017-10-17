#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> arr;
	int l = n-1;
	while(l--)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	int a,b;
	cin>>a>>b;
	int years=0;
	for(int i=a;i<b;i++)
	{
		years+=arr[i-1];
	}
	cout<<years<<endl;
	return 0;
}