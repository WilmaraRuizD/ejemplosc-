//escriba la siguiente expresion como expresion (a+(b/c))/(d+(e/f))
#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){

float resultado=0;
float a,b,c,d,e,f ;

cout<<"Escriba el valor de a: "<<endl;
cin>>a;

cout<<"Escriba el valor de b: "<<endl;
cin>>b;

cout<<"Escriba el valor de c: "<<endl;
cin>>c;

cout<<"Escriba el valor de d: "<<endl;
cin>>d;

cout<<"Escriba el valor de e: "<<endl;
cin>>e;

cout<<"Escriba el valor de f: "<<endl;
cin>>f;

resultado=(a+(b/c))/(d+(e/f));

cout<<"el resultado de la esprecion es: " <<resultado <<endl;

}