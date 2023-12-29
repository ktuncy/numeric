#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b;
	a=1;
	while (a==1){
		cout<<endl<<"enter an integer"<<endl;
		cin>>b;
		if (b==666){
			cout<<"I don't like this number";
			a=a+1;
		}
		else if (b%2==1){
			cout<<pow(b,2);
		}
		else if (b%2==0){
			cout<<pow(b,0.5);
		}
	}
	return 0;
}
