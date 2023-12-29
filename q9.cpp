#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sum=0;
	for(int k=1;k<11;k++)
	{
	sum	=sum + pow(k,2);
	}
	cout<<"our sum is "<<sum;
	return 0;
}
