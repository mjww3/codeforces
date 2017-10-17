#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct coord
{
	int x;
	int y;
};

int main()
{
	coord a;
	coord b;
	cin>>a.x>>a.y>>b.x>>b.y;

	coord c;
	coord d;
	int dist = sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2))
	

	cout<<c.x<<c.y<<d.x<<d.y<<endl;
}