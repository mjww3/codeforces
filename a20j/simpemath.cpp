#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#include <set>

int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	float x = (-b+sqrt((float)pow(b,2)-4*a*c))/(2*a);
	cout<<x<<endl;
	return 0;
}