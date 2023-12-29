#include <iostream>
#include <valarray>
using namespace std;

valarray < int > vecelemmul(valarray < int > u1,valarray < int > u2){
	valarray< int > vecmelul;
	for (int k=0;)
}


void vecavers(valarray < int > y1,valarray < int > y2,double &v1ave,double &v2ave){
    int a=0,b=0;
	for (int i=0;i<y1.size();i++){
		a=a+y1[i];
	}
	v1ave=a/y1.size();
	for(int j=0;j<y2.size();j++){
		b=b+y2[j];
	}
	v2ave=b/y2.size();
}
