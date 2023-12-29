#include <iostream>
#include <cmath>
using namespace std;

int fibo (int n){
	double b=pow(5.0,0.5);
	double x=(1+b)/2;
	return((pow(x,n)-pow(x-b,n))/b);
}

int main()
{
	int a;
	double fn;
	cin>>a;
	fn=fibo(a);
	cout<<"your result is "<<fn;
	return 0;
	
}
