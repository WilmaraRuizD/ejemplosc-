//escriba la siguiente expresion como expresion a+(b/(c-d))

#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){

float resultado=0;
float a,b,c,d ;

cout<<"Escriba el valor de a: ";
cin>>a;

cout<<"Escriba el valor de b: ";
cin>>b;

cout<<"Escriba el valor de c: ";
cin>>c;

cout<<"Escriba el valor de d: ";
cin>>d;

resultado=a+(b/(c-d));

cout.precision(2);

cout<<"El resultado de la espresion es:" <<resultado ;

return 0; 

}