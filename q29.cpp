#include <iostream>
#include <cmath>
using namespace std;

double integ(double x){
	return(sin(x)*cos(x));
}

double trapezoid(double a,double b,int N){
	double h,sum,f,e;
	sum=0.0;
	h=(b-a)/N;
	for (int k=0;k<N;k++){
		f=a+(k+1)*h;
		e=a+k*h;
		sum=sum+integ(f)+integ(e);
		}
		return(sum*0.5*h);		
}

int main()
{
	int z;
	double c,d,result;
	cout<<"write a lower limit for integral"<<endl;
	cin>>c;
	cout<<"write an upper limit for integral"<<endl;
	cin>>d;
	cout<<"write the number of subintervals"<<endl;
	cin>>z;
	result=trapezoid(c,d,z);
	cout<<result;
	return 0;
	
}
