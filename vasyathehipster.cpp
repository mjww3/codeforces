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
	int c;
	int x1;
	int x2;
	if(a==b)
	{
		cout<<a<<" "<<0<<endl;
	}
	else{
		x1= min(a,b);
		if(a>x1)
		{
			int d = a-x1;
			x2 = d/2;
		}
		else if(b>x1)
		{
			int d = b-x1;
			x2 = d/2;
		}
		cout<<x1<<" "<<x2<<endl;


	}
	return 0;
}