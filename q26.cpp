#include <iostream>
#include <cmath>
using namespace std;

int myfactorial(int a)
{
	int t;
	int b=1;
	t=2*a+1;
	for(int t; t>0; t--)
	{ b=b*t;}
	return(b);
}

double myownsinus(int x,int n){
	
	double myvalue=0.0;
	int z;
	for (int n; n>-1;n--){
		z=myfactorial(n);
		myvalue=myvalue+pow(-1,n)*pow(x,2*n+1)/z;
	}
	return(myvalue);
}

int main()
{ 
    int k,l;
    double mysinusvalue,u,v;
    cin>>k;
    cin>>l;
    mysinusvalue=myownsinus(k,l);
    u=sin(k);
    v=u-mysinusvalue;
    cout<<mysinusvalue;
    cout<<v;
    return 0;
    
        
	
}
