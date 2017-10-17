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
	int n1 = n;
	int count1=0;
	int count2=0;
	int count3=0;
	while(n1--)
	{
		int g;
		cin>>g;
		if(g==1)count1++;
		else if(g==2)count2++;
		else if(g==3)count3++;
	}
	int x1 = max(count1,count2);
	int x = max(x1,count3);
	int answer = n-x;
	cout<<abs(answer)<<endl;
	return 0;
}