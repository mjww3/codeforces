#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin>>s;
	set<char> sets;

	for(int i=0;i<s.length();i++)
	{
		sets.insert(s[i]);
	}
	if(sets.size()%2==0)
	{
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
	return 0;

}
