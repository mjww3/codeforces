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
	vector<char> ch;
	for(int i=0;i<s.length();i++)
	{
		s[i] = tolower(s[i]);
		if((s[i]!='a' && s[i]!='e' && s[i]!='i'&& s[i]!='o' && s[i]!='u' && s[i]!='y'))
		{
			ch.push_back(s[i]);
		}
	}
	string t;
	for(int i=0;i<ch.size();i++)
	{
		t = t+'.';
		t = t+ch[i];
	}
	cout<<t<<endl;
	return 0;

}