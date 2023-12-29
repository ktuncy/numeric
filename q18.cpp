#include <iostream>
#include <valarray>
using namespace std;

int main (){
	
	double a=0.7,b=0.2;
	valarray <double> s(51),i(51),r(51);
	s[0]=0.99;
	i[0]=0.01;
	r[0]=0.00;
	
	for (int j=0;j<50;j++){
		s[j+1]=s[j]-a*i[j]*s[j];
		i[j+1]=i[j]+a*i[j]*s[j]-b*i[j];
		r[j+1]=r[j]+b*i[j];
	}
	
	cout<<"susceptible\n";
	cout<<s[50];
	
	cout<<"\ninfected\n";
	cout<<i[50];
	
	cout<<"\nrecovered\n";
	cout<<r[50];
	
	return 0;
}
