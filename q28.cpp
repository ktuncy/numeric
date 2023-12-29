#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
	return(2*pow(x,2)+9*x-17);
}

double bisection(double a,double b,double e){
	double z,c,root;
	z=1;
	while (z==1){
		c=(a+b)/2;
		if (-e<f(c) && f(c)<e){
			root=c;
			z=z+1;
		}
		else if (f(c)*f(a)<0){
			b=c;
		}
		else if (f(c)*f(b)<0){
			a=c;
		}
	}
	return (root);
}

int main(){
	double i,j,k;
	cout<<"write the initial point of interval"<<endl;
	cin>>i;
	cout<<"write the final point of interval"<<endl;
	cin>>j;
	cout<<"write the epsilon"<<endl;
	cin>>k;
	if (f(i)*f(j)>0){
		cout<<"no root";
	}
	else {
		cout<<bisection(i,j,k);
	}
	return 0;
	
}
