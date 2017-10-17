#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#include <set>
int main()
{
	char s;
	set<char> st;

	while(s!='}')
	{
		cin>>s;
		if(s!='{' && s!='}' && s!=',')
		{
			st.insert(s);
		}
	}
	cout<<st.size()<<endl;
	return 0;
}