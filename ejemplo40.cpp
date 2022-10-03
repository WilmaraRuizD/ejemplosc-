//escriba un programaque calcule elvalor de : 2^1+2^2+2^3+...2^n

#include <iostream>
#include <conio.h>
#include <math.h> 

using namespace std;

int main(){
	
	int n,suma=0,elevacion=0;
	
	cout<<"introduzca el valor de n :"<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		elevacion=pow(2,i);
		suma+=elevacion;
	}
	
	cout<<"\n La suma es :"<<suma;
	getch();
	return 0;
}
