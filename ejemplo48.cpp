/*Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en salida estandar los numeros del vector con su indice asociada */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int numero[100];
	int n;
	
	cout<<"Escriba los numeros de elementos que va a tener el arreglo "<<endl;cin>>n;
	
	for(int i=0;i<n;i++)
	{
			cout<<"Escriba los numeros de un vector "<<endl;cin>>numero[i];	}


     for(int i=0;i<n;i++)
{
	cout<<i<<" ->"<<numero[i]<<endl;
}

getch();
return 0;	
}