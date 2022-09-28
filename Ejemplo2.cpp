/*1 problema Escriba un programa que lea las entradas estandar de dos número y muestre la salida 
en la salida estanda su suma, resta, multiplicacion y division. */

#include <iostream> 

using namespace std;


int main(){
	
	int num1, num2, suma=0, resta=0 , division=0 , multiplicacion=0;
	
	cout<<"por favor ingrese el numero1 ";
    cin>>num1;
	
	
	cout<<"por favor ingrese el numero2 " ;
    cin>>num2;
	
	suma=num1+num2;
	resta=num1-num2;
    multiplicacion=num1*num2;
	division=num1/num2;
	
	
	cout<<"El resultado de la suma:" << suma <<endl;
	cout<<"El resultado de la resta:" << resta <<endl ;
	cout<<"El resultado de la multiplicacion:" <<multiplicacion <<endl;
	cout<<"El resultado de la division:" <<division <<endl;
		
		
	return 0;
}
