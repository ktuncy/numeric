#include <iostream>
using namespace std;

int main() 
{
	int sum=0;
	for (int a=9;a>-5;a-=1){
		cout<<a<<",";
		if (a==-1){
			cout<<"\nyour sum is "<<sum;
			break;
		}
		sum=sum+a;
	}
	return 0;
}
