#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	bool vladik = true;
	bool valera = false;
	int n = 1;
	string answer;
	bool got = false;
	while(a>=0 && b>=0)
	{
		if(vladik && !got)
		{
			a = a -n;
			if(a<0)answer = "Vladik";
			vladik = false;
			valera = true;
		}
		else if(valera && !got)
		{
			b = b-n;
			if(b<0)answer = "Valera";
			valera = false;
			vladik = true;
		}
		n++;
	}
	cout<<answer<<endl;
	return 0;
}