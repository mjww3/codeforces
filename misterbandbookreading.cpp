#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int c,v1,v2,a,l;
	cin>>c>>v1>>v2>>a>>l;

	int finalpage=0;
	int days = 0;
	days++;
	finalpage+=v1;
	while(finalpage<c)
	{
		int x = v1+days*a;
		if(x>v2)
		{
			x = v2;
		}
		finalpage+=x-l;
		days++;
	}
	cout<<days<<endl;
	return 0;
}