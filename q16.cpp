#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main()
{
	valarray<double> u(4),v(4),t(4),y(4);
	u[0]=2.0;
	u[1]=5.0;
	u[2]=1.0;
	u[3]=6.0;
	
	for (int i=0;i<4;i++){
		v[i]=u[i]+16;
		cout<<v[i]<<" ";
	}
	cout<<"\n";
	for (int i=0;i<4;i++){
		t[i]=pow(u[i],0.5);
		cout<<t[i]<<" ";
	}
	cout<<"\n";
	for (int i=0;i<4;i++){
		y[i]=pow(u[i],2.0);
		cout<<y[i]<<" ";
	}
	return 0;
}


