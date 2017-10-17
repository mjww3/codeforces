#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
using namespace std;
int tovisit;
void dfs(vector<vector<int> >graph,int n,bool visited[])
{
	visited[n] = true;
	vector<vector<int> >::iterator i;
	for(i=graph[n].begin();i!=graph[n].end();i++)
	{
		if(!visited[*i])
		{
			dfs(graph,*i,visited);
		}
	}
}

int dfsutil(int n,int k)
{
	bool *visited = new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i] = false;
	}
	dfs(graph,1,visited);
	if(visited[k]==true){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
return 0;	
}

int main()
{
	int n,t;
	cin>>n>>t;
	tovisit = t;
	vector<vector<int> > graph;
	for(int i=0;i<n-1;i++)
	{
		int g;
		cin>>g;
		graph[i].push_back(i+g);
	}
int x = dfsutil(n,t);
cout<<x<<endl;
return 0;
}