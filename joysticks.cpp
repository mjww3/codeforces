#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
using namespace std;

int recurse(int a,int b)
{
	if(a<=0||b<=0)
	{
		return 0;
	}
	if (a>b)
	{
		return 1+recurse(a-2,b+1);
	}
	else{
		return 1+recurse(a+1,b-2);
	}
}

int main()
{
	int a,b;
	cin>>a>>b;
	if(a==1 && b==1)cout<<0<<endl;
	else cout<<recurse(a,b)<<endl;
	return 0;
}