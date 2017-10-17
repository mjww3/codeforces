#include <stdio.h>	
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	long long int n,k;
	cin>>n>>k;
	vector<long long int> arr1;
	arr1.push_back(1);
	vector<long long int> arr2;
	arr2.push_back(2);
	int sum=3;
	while(sum<=n)
	{	
		if(sum%2!=0)
		{
			arr1.push_back(sum);
		}
		else
		{
			arr2.push_back(sum);
		}		
	sum++;
	}
arr1.insert(arr1.end(),arr2.begin(),arr2.end());
cout<<arr1[k-1]<<endl;
return 0;
}