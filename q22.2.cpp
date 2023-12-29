#include <iostream>
#include <valarray>
using namespace std;

int func1 (valarray<int>v1){
	int z=0;
	for (int i=0;i<v1.size();i++){
	 if(v1[i]>3){
	 	z=z+1;
	 }	
	}
	return (z);
}


int main(){
	valarray < int > u(7);
	for (int i=0;i<7;i++){
		cin>>u[i];	}
		
	cout<<func1(u);
	return 0;
}
