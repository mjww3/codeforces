#include <cmath>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int main()

{
	int n,a,b;
	cin>>n>>a>>b;
	int answer;
	answer=a;
	if(b>=0)
	{
		while(b>0)
		{
			answer++;
			b--;
			if(answer>n)
			{
				answer = 1;
			}
		}
		cout<<answer<<endl;
	}
	else
	{
		while(b<0)
		{
			answer--;
			b++;
			if(answer<1)
			{
				answer = n;
			}
		}
		cout<<answer<<endl;
	}
	return 0;
}