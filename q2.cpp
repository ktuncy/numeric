#include <iostream>
using namespace std;

int main(){
	int t,h;
	cout<<"please enter an integer"<<endl;
	cin>>t;
	if (t<30){
		h=1;
	}
	else if (t<10){
		h=2;
	}
	else {
		h=3;
	}
	cout<<h;
	return 0;
}
