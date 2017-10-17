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
	int n;
	cin>>n;
	vector<int> vec;
	while(n--)
	{
		int g;
		cin>>g;
		vec.push_back(g);
	}
	bool changed1 = false;
	bool changed2 = false;

	for(int i=0;i<n-1;i++)
	{
		if(!changed2)
		{
			if(vec[i+1]>vec[i])
		{
			changed1 = true;
		}
		}
		else if(changed1)
		{
			if(vec[i+1]<vec[i])
			{
				changed2 = true;
			}
			else{
				changed2 = false;
			}
		}
		
	}

return 0;

}