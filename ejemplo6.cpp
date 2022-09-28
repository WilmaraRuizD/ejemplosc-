//1. escriba la siguiente expresion en c++:a) (a/b)+1

#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){

int float=0;
float a , b ;

cout<<"Por favor introduca el valor de a:" <<endl ;
cin>>a ;

cout<<"Por favor introduca el valor de b:" <<endl ;
cin>>b ;

result=(a/b)+1 ;

cout.precision(2);

cout<<"el resultado es:" <<result <<endl ;
return 0 ;
}