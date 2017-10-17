#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <vector>
using namespace std;
int n,m,k;

bool isvalid(int x,int y)
{
	if(x>=0 && x<n && y>=0 && y<m)
	{
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	cin>>n>>m>>k;
	char arr[501][501];
	bool visited[501][501];
	pair<int,int> p;
	bool found  = false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
				if(found)
				{
					break;
				}
				if(arr[i][j]=='.')
				{
					p.first = i;
					p.second = j;
					found = true;
				}
			}
	}
	queue<pair<int,int> > q;
	q.push(make_pair(p.first,p.second));
	
	while(!q.empty())
	{
		pair<int,int> qq;
		qq = q.front();
		q.pop();
		if(arr[qq.first][qq.second]=='.' && !visited[qq.first][qq.second])
		{
			if(isvalid(qq.first+1,qq.second))
			{
				q.push(make_pair(qq.first+1,qq.second));
			}
			if(isvalid(qq.first,qq.second+1))
			{
				q.push(make_pair(qq.first,qq.second+1));
			}
			if(isvalid(qq.first-1,qq.second))
			{
				q.push(make_pair(qq.first-1,qq.second));
			}
			if(isvalid(qq.first,qq.second-1))
			{
				q.push(make_pair(qq.first,qq.second-1));
			}
		}
		visited[qq.first][qq.second] = true;
	}

	return 0;
}