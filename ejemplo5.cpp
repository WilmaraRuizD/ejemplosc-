/*Programa que lea de la entrada estandar los siguientes datos de una persona 
edad=dato de tipo entero, sexo de tipo caracter, altura =real 
el programa debe mostrarlo en salida estanda. */

#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
	
int edad= 0 ;
char sexo ;  //esto tambien puede ser char sexo[10];//el valor 10 son los espacios en memoria para ese string
float altura=0;

cout<<"Por favor introduca su edad:" <<endl ;
cin>>edad ;

cout<<"Por favor introduca su sexo " <<endl ;
cin>>sexo;

cout<<"Por favor introduca su altura" <<endl;
cin>>altura;

cout<<"Su edad es:" <<edad <<endl ;
cout<<"Su sexo es:" <<sexo <<endl ;
cout<< "Su altura es:" <<altura <<endl ;

	return 0;
}