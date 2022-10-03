/*
Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango de  [20-30]
o se introduzca el valor 0.El programa debe entregar la suma de los valores mayores a 0 introducidos
#include<iostream>
#include<conio.h>

using namespace std;
 
 int main(){
*/

xz
	int numero,suma=0;
	
	do{
		cout<<"introduce el valor"<<endl;
		cin>>numero;
		
		if(numero>0){
		suma=suma+numero;}
		
		}while(((numero<20)||(numero>20))&&(numero!=0));	
			
			cout<<"El resultado de la suma : "<<suma<<endl;
			
	getch();
	return 0;
}
