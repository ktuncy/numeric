#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int sum=0;
	for(int n=1;n<6;n++){
		sum=sum+pow(n,n);
	}
	cout<<sum;
	return 0;
}
