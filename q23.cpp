#include <iostream>
#include <cmath>
using namespace std;

double func1(double x,int N){
	double sum=0.0;
	for (int i=0;i<=N;i++){
	sum=sum+pow(x,i);	
	}
	return (sum);
}

void func2(double x,double& y){
	y=1.0/(1-x);	
}

int main()
{
	double a,j,r;
	int k;
	cout<<"write a double number\n";
	cin>>a;
	if(-1<=a && a<=1){
		cout<<"write an integer number\n";
		cin>>k;
		j=func1(a,k);
		cout<<j;
	}
	else if(-1>=a || a>=1)
	{
		func2(a,r);
		cout<<r;
	}
	return 0;
}

