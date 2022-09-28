//bloque de expresiones escriba la expresion matematica como expresion c++ (a+b)/(c+d)

#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
	
float resultado=0;
float a,b,c,d;

cout<< "Escriba los valores de a:" <<endl;
cin>>a;
cout<< "Escriba los valores de b:" <<endl;
cin>>b;
cout<< "Escriba los valores de c:" <<endl;
cin>>c;
cout<< "Escriba los valores de d:" <<endl;
cin>>d;

resultado =(a+b)/(c+d);
cout.precision(2);	
cout<< "El resultado de la expresion matematica es :" <<resultado <<endl;	
}