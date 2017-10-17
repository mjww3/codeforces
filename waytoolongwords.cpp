#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string answer="";
	while(n--)
	{
		string s;
		cin>>s;
		if(s.length()>10)
		{
			answer = s[0]+to_string(s.length()-2)+s[s.length()-1];
		}
		else{
			answer = s;
		}
		cout<<answer<<endl;

	}
	return 0;
}