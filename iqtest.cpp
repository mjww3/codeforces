#include <cmath>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> arreven;
	vector<int> arrodd;
	int find;
	vector<int> arr;
	int index=0;
	for(int i=0;i<n;i++)
	{
		int g;
		cin>>g;
		if(g%2==0)
		{
			arreven.push_back(g);
		}
		else{
			arrodd.push_back(g);
		}
		arr.push_back(g);
	}
	if(arrodd.size()==1)
	{
		find=arrodd[0];
	}
	else{
		find = arreven[0];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==find)
		{
			index = i;
		}
	}
	cout<<index+1<<endl;
	return 0;
}