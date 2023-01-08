#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int x[3]={1,5,4};
	int y[3]={3,2,5};
	
	for(int i=0;i<3;i++){
		cout<<"Array x "<<i<<" : "<<x[i]<<endl;
	}
	cout<<"\n";
	
	for(int j=0;j<3;j++){
		cout<<"Array y "<<j<<" : "<<y[j]<<endl;
	}
	cout<<"\n";
	
	for(int k=0;k<3;k++){
		cout<<"Array Penjumlahan "<<k<<" : "<<x[k]+y[k]<<endl;
	}
	return 0;

}
