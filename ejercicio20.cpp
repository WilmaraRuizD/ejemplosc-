/*Escriba un programa que lea un valor entero y determine si se trata de un numero par o impar. 

*/
#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
	
	int numero;
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero ";
	}
	//divide el numero 2 y saca el reciduo.
	else if(numero%2==0)
	{
		cout<<"El numero es par: ";
	}
else{
	cout<<"El numero es impar: ";
}	
	return 0;
	
}