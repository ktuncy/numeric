#include <iostream>
#include <valarray>
using namespace std;

void great(valarray<int>u,int &b){
	b=0;
	for (int i=0;i<u.size();i++){
		if (u[i]>3){
			b=b+1;		}
	}
}

int main(){
	valarray<int>v(7);
	int c;
	for (int i=0;i<7;i++){
		cin>>v[i];
	}
	great(v,c);
	cout<<c;
	return 0;
	
}
