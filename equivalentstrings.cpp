#include <stdio.h>
#include <iostream>
#include <math.h>
#include <list>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	string a1,a2,b1,b2;
	for(int i=0;i<s1.length()/2;i++)
	{
		a1 = a1+s1[i];
	}
	for(int i=0;i<s1.length()/2;i++)
	{
		b1 = b1+s2[i];
	}
	for(int i=s1.length()/2;i<s1.length();i++)
	{
		a2 = a2+s1[i];
	}
	for(int i=s1.length()/2;i<s1.length();i++)
	{
		b2 = b2+s2[i];
	}
	sort(a1.begin(),a1.end());
	sort(a2.begin(),a2.end());
	sort(b1.begin(),b1.end());
	sort(b2.begin(),b2.end());
	if((a1==b1 && a2==b2)||(a1==b2 && a2==b1))
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}