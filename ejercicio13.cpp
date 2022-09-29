/* Realece un programa que calcule el valor que toma la siquiente funcion 
para valor que toma la siquiente funcion para valores dados de x - y 
f(x,y)=(vx)/(y^2-1)
*/

#include <iostream> //ENTRADA Y SALIDA DE DATOS 
#include <math.h> //libreria de funciones matematicas 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
float y,x;
float resultado=0;

cout << "ingrese el valor de x:"<<endl;
cin>>x;
cout << "ingrese el valor de y:"<<endl;
cin>>y;

resultado=(sqrt(x))/(pow(y,2)-1);

cout << "el resultado de la expresion es:"<<resultado << endl;

return 0;
}