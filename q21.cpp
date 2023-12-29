#include <iostream>
#include <valarray>
using namespace std;
void myfunc2(valarray<int> vec,int num,int& myres){
	myres=vec[num];}
int main(){
	int i,t=0,N,myresult;
	valarray<int> v(10);
	for (i=0;i<10;i++){
		t=t+i;
		v[i]=10*t;
	}
	cin>>N;
	myfunc2(v,N,myresult);
	cout<<myresult;
	return 0;
}
