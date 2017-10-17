#include <stdio.h>
#include <iostream>
#include <math.h>
#include <list>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	long long int n;
	cin>>n;

	char x = 'S';
	list<string> arr;
	arr.push_back("Sheldon");
	arr.push_back("Leonard");
	arr.push_back("Penny");
	arr.push_back("Rajesh");
	arr.push_back("Howard");
	long long int m=1;
	while(m<n)
	{
		string c = arr.front();
		arr.pop_front();
		for(long long int i=0;i<2;i++)
		{
			arr.push_back(c);
		}
		m++;
	}
	cout<<arr.front()<<endl;
	return 0;

}