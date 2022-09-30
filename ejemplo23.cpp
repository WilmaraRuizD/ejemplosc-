/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salda estandar si el caracter es una vocalminuscula 
o es unavocal mayuscula. o no es una vocal  
*/
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
	case'A':
	case'E':
	case'I':
	case'O':
	case'U':cout<<"es un vocal en mayuscula";break;
	default:cout<<"no es una vocal";break;}
return 0;

}