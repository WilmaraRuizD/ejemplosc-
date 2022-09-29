/*Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo y escriba en la
 salida estandar su hipotenusa --la hipotenusa se calcula a^2=b^2+c^2 */

#include <iostream> //ENTRADA Y SALIDA DE DATOS 
#include <math.h>

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
float b,c ;
float resultado=0;

cout<<"escriba el valor de la base:"<<endl;    cin>>b;
cout<<"escriba el valor de la altura:"<<endl;  cin>>c;

resultado=sqrt(pow(b,2)+pow(c,2));

cout.precision(2);
cout<<"La hipotenusa es:"<<resultado <<endl;
	
return 0;
}
