#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len = s.length();
	bool flag1 = false;
	bool flag2 = false;
	bool flag3 = false;
	bool flag4 = false;
	vector<bool> arr(len,false);
	vector<bool> arr1(len,false);
	for(int i=0;i<s.length()-1;i++)
	{
		if(arr[i]==false && arr[i+1]==false && flag2==false)
		{
			if(s[i]=='B' && s[i+1]=='A')
			{
				arr[i] = true;
				arr[i+1] = true;
				flag2=true;

			}
		}
	}
	for(int i=0;i<s.length()-1;i++){

		if(arr[i]==false && arr[i+1]==false && flag1==false)
		{
			if((s[i]=='A' && s[i+1]=='B'))
			{
				arr[i] = true;
				arr[i+1] = true;
				flag1 = true;
			}
		}
	
	}
	for(int i=0;i<s.length()-1;i++)
	{
		if(arr1[i]==false && arr1[i+1]==false && flag3==false)
		{
			if((s[i]=='A' && s[i+1]=='B'))
			{
				arr1[i] = true;
				arr1[i+1] = true;
				flag3 = true;
			}
		}
	}
	for(int i=0;i<s.length()-1;i++){

		if(arr1[i]==false && arr1[i+1]==false && flag4==false)
		{
			if(s[i]=='B' && s[i+1]=='A')
			{
				arr1[i] = true;
				arr1[i+1] = true;
				flag4=true;
			}
		}
	
	}
	if(flag1==true && flag2==true )
	{
		cout<<"YES"<<endl;
	}
	else if(flag3==true && flag4==true)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
return 0;
}