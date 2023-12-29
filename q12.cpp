#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int n=0;
	while(sum<=100)
	{
		n=n+1;
		sum=sum+n;
		cout<<n<<",";
	}
	
	cout<<"the sum is "<<sum;
	return 0;
	
}
