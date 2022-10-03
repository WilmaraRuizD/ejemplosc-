/*Realice un programa que solicite de la entrada estandar un un entero del 1 al 10 y muestre en la salida estandar sus tablas de multiplicar*/



#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int i ,numero;

do{
	cout<<"por favor introduzca el dijito del (1al 10): "<<endl;
	cin>>numero ;
}
while((numero<1)||(numero>10));

for(int i=1;i<=10;i++){
	cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
}
	system("pause");
	return 0;
}