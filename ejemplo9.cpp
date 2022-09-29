//Escriba un fragmento de programa que intercambie los valores de dos variables. 

//primer programa 
#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
	
float a, b,c ;

cout<<"Por favor introdusca el valor de a:";
cin>>a ;
cout<<"Por favor introdusca el valor de b:";
cin>>b ;

c=a ;
a=b;
b=c;

cout<<"El valor de a es:"<<a << endl;
cout<<"El valor de b es:"<<b << endl;
cout<<"El valor de c es:"<<c << endl;


return 0 ;
}