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
	string t;
	bool flag = true;

	cin>>s>>t;
	int len1 = s.length();
	int len2 = t.length();

	int i=0;
	int j=len2-1;

	while(i<len1 && j>=0)
	{
		if(s[i]!=t[j])
		{
			flag=false;
			break;
		}
		i++;j--;
	}
	if(flag==true)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}