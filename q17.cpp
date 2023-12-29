#include <iostream>
#include <cmath>
#include <valarray>
using namespace std;

int main()
{
	valarray <double> v(6),u(6);
	int a=0;
	
	v[0]=1.0;
	v[1]=8.0;
	v[2]=3.0;
	v[3]=9.0;
	v[4]=0.0;
	v[5]=1.0;
	
	for (int i=0;i<6;i++){
		u[i]=sin(v[i]);
		cout<<u[i]<<" ";	
	}
	cout<<endl;
	
	for (int i=0;i<6;i++){
		a=a+v[i];
	}
	cout<<"the sum of elements is "<<a;
	
}
