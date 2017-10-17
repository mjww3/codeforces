#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin>>s;
	bool found = false;
	for(int i=0;i<s.length()-7;i++)
	{
	if(!found)
	{
		int sum =0;
		for(int j=0;j<7;j++)
		{
			sum+=(int)s[i+j];
			if(sum==0 || sum==7)
			{
			found = true;
			cout<<sum<<endl;
			}			
		}
	}
	}
	if(found)
	{
		cout<<"YES"<<endl;
		
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}