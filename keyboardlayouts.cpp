#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string a;
	string b;
	string c;
	string n = "";
	cin>>a>>b>>c;
	map<char,char> mp;

	for(int i=0;i<26;i++)
	{
		mp.insert({a[i],b[i]});
	}
	for(int i=0;i<c.length();i++)
	{	
		bool upper = false;
		char nm;
		if (toupper(c[i])==c[i])
		{
			upper = true;
		}
		c[i] = tolower(c[i]);
		if(isdigit(c[i]))
		{
			cout<<c[i];
		}
		else if(!upper)
		{
			n = n+mp[c[i]];
			cout<<mp[c[i]];
		}
		else
		{
			nm = mp[c[i]];
			char x = toupper(nm);
			cout<<x;
		}
		
	}

	cout<<endl;
	return 0;
}