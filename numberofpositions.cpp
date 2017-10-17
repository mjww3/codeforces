#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n,a,b;
	cin>>n>>a>>b;

	cout<<min(n-a,b+1)<<endl;
	return 0;
}