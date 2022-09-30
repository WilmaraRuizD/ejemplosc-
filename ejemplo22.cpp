/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter
e indique en la salida estandar si el caracter es una vocal minuscula o no */

#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
	
char letra;
 cout <<"Escriba el caracter "<<endl;
 cin>>letra;
 
switch(letra){
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':cout<<"es un vocal en minuscula";break;
	default:cout<<"no es una vocal minuscula ";break;
} 

return 0;
}