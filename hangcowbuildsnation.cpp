#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <queue>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> comp;
	while(k--)
	{
		int g;
		cin>>g;
		comp.push_back(g);
	}
	vector<list<int> >graph(n);
	while(m--)
	{
		int f,g;
		cin>>f>>g;
		graph[f].push_back(g);
		graph[g].push_back(f);
	}

	vector<bool> visited(n,false);
	vector<int> sizecomponents;
for(int i=1;i<=n;i++)
{
	if(visited[i]==false)
	{
		queue<int> q;
		q.push(i);
		visited[i] = true;
		int count = 0;
		while(!q.empty())
		{
			int h = q.front();
			q.pop();
			list<int>::iterator itr;
			for(itr=graph[h].begin();itr!=graph[h].end();++itr)
			{
				cout<<"ok"<<endl;
			}
			sizecomponents.push_back(count);
		}
	}
}
for(int i=0;i<sizecomponents.size();i++)
{
	cout<<sizecomponents[i]<<endl;
}
return 0;
}