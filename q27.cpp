#include <iostream>
#include <valarray>
#include <fstream>
using namespace std;

void mysum(valarray < valarray < int > > u,valarray < int > &vec1) {
    int b;
	for (int i=0;i<30;i++){
		b=0;
		for (int j=0;j<30;j++){
			b=b+u[i][j];
		}
		vec1[i]=b;
	}
}

void max_min (valarray < int > z,int &max,int &min){
	max=z[0];
	for (int k=1;k<z.size();k++){
		if (max<z[k]){max=z[k];}
	}
	min=z[0];
	for (int j=0;j<z.size();j++){
		if (min>z[j]){min=z[j];}
	}
}


int main(){
valarray < valarray < int > > m(30);
valarray < int > vec(30);
for (int k=0;k<m.size();k++)m[k].resize(30);
for (int i=0;i<30;i++){
	for (int j=0;j<30;j++){	m[i][j]=i+j;}
}

    mysum(m,vec);
    ofstream myfile1;
    myfile1.open("myresult.txt");
    for (int i=0;i<vec.size();i++){
	myfile1<<vec[i]<<endl;}
	myfile1.close();
	
    return 0;
}
