#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool isdistinct(int year)
{
	bool found = true;
	int arr[4];
	arr[0]= year/1000;
	arr[1] = year/100;
	arr[1] = arr[1]%10;
	arr[2] = year/10;
	arr[2] = arr[2]%10;
	arr[3] = year%10;
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(arr[i]==arr[j])
			{
				found = false;
			}
		}
	}
	if (found)
	{
		return true	;
	}
	else{
		return false;
	}
}

int main()
{
	int y;
	cin>>y;
	bool found = false;
	while(!found)
	{
		y++;
		if (isdistinct(y))
		{
			cout<<y<<endl;
			break;
		}
	}
	return 0;

}