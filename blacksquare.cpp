#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	bool found = false;
	char arr[101][101];
	for(int i=0;i<101;i++)
	{
		for(int j=0;j<101;j++)
		{
			arr[i][j] = 'o';
		}
	}
	int n,m;
	cin>>n>>m;
	int minx=101;
	int miny=101;
	int maxx =0;
	int maxy = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char s;
			cin>>s;
			if(s=='B')
			{

			}
		}
	}

}