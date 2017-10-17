#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int> > graph;
	vector<int> degree(n);
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		int initial = a;
		graph[a].push_back(b);
		graph[b].push_back(a);
		degree[a]++;
		degree[b]++;
	}



}