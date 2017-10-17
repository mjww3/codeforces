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
	bool hash = false;
	bool hase = false;
	bool hasl1 = false;
	bool hasl2 = false;
	bool haso = false;

	for(int i=0;i<s.length();i++)
	{
		if(!hash)
		{
			if(s[i] =='h')
			{
				hash = true;
			}
		}
		else if(hash && !hase)
		{
			if(s[i] =='e')
			{
				hase = true;
			}
		}
		else if(hash && hase && !hasl1)
		{
			if(s[i] =='l')
			{
				hasl1 = true;
			}
		}
		else if(hash && hase && hasl1 && !hasl2)
		{
			if(s[i] =='l')
			{
				hasl2 = true;
			}
		}
			else if(hash && hase && hasl1 && hasl2 && !haso)
		{
			if(s[i] =='o')
			{
				haso = true;
			}
		}

	}
		if(hash && hase && hasl1 && hasl2 && haso)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		return 0;
}