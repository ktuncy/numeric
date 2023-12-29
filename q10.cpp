#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	for(int k=1;k<10;k++)
	{
		sum=sum +k*(k+1);
	}
	cout<<"our sum is "<<sum;
	return 0;
}
