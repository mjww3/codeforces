#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int a;
	cin>>a;
	vector<int> arr;
	double total;
	for(int i=0;i<a;i++)
	{
		int g;
		cin>>g;
		arr.push_back(g);
		total+=(double)g;
	}
	cout<<total/a<<endl;
	return 0;
}