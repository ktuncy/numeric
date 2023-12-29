#include <iostream>
#include <valarray>
using namespace std;

double xcm (valarray<double>massvec,valarray<double>xvec)
{   double sum=0.0,sum1=0.0;
	for(int i=1;i<5;i++){
		sum=sum+massvec[i]*xvec[i];
		sum1=sum1+massvec[i];
	}
	
	return(sum/sum1);
}

double ycm (valarray<double>massvec,valarray<double>yvec){
	double rum=0.0,rum1=0.0;
	for (int i=1;i<5;i++){
		rum=rum+massvec[i]*yvec[i];
		rum1=rum1+massvec[i];
	}
	return (rum/rum1);
}

int main() {
	double x,y;
	valarray<double>massvec(4),xvec(4),yvec(4);
	cout<<"enter the masses\n";
	cin>>massvec;
	cout<<"enter the x-coordinate\n";
	cin>>xvec;
	cout<<"enter the y-coordinates\n";
	cin>>yvec;
	x=xcm(massvec,xvec);
	y=ycm(massvec,yvec);
	cout<<"your center of mass is "<< x <<" and "<< y;
	return 0;
	
	
}
