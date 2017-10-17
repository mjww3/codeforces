#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int w;
	cin>>w;
	int x=0;
	bool flag=false;
	if(w%2==0)
	{
		int x = w-2;
		if(x==0)
		{
			flag=false;
		}
		else if(x%2==0)
		{
			flag=true;
		}
	}
	if(flag==true)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}