#include <iostream>
#include <cmath>
#include <valarray>
using namespace std;

int main(){
	
	int x,fibo;
	valarray < int > u1(900);
	u1[0]=0;
	u1[1]=1;
		for (int n=0;n<u1.size();n++){
		u1[n+2]=u1[n]+u1[n+1];
	}
	cout<<"enter a nonnegative integer number"<<endl;
	cin>>x;
	if (x==0){
		cout<<"0";
	}
	else if (x==1){
		cout<<"1";
	}
	else if (x>1){
	fibo=u1[x-2]+u1[x-1];
	cout<<"your number is "<<fibo;
	}
	else {
		cout<<"Your number is not a nonnegative integer number";
	}
	
	return 0;
}

