/* Realece un programa que calcule el valor que toma la siquiente funcion 
para valor que toma la siquiente funcion para valores dados de x - y 
x=(-b+-(vb^2-4ac))/2a
*/

#include <iostream> //ENTRADA Y SALIDA DE DATOS 
#include <math.h> //libreria de funciones matematicas 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
float x1=0,b,a,c,x2=0;

cout<<"Escriba el valor de a"<< endl; cin>>a;
cout<<"Escriba el valor de b"<< endl; cin>>b;
cout<<"Escriba el valor de c"<< endl; cin>>c;

x1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
x2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);


cout<<"El valor de la expresion es:"<< x1 <<endl;
cout<<"El valor de la expresion es:"<< x2 <<endl;
return 0;
}