/*Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados 
de los 10 primeros numeros mayores que cero */


#include<iostream>
#include<conio.h>
#include <math.h>

using namespace std;

int main(){
	
int suma=0,cuadrado,num;

for(int i=1;i<=10;i++)
	{
	
cuadrado=pow(i,2);
  suma=suma+cuadrado;
  
}

cout<<"El resultado de la suma "<<suma<<endl;

  getch();
	return 0;
}