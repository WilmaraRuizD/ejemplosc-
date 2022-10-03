/*Estructuras  repetitivas
Realice un programaque lea de la entrada estandar numeros hasta quese introdusca cero.
en ese momento el programadene terminar y mostrarenl a salida el numero de  valores mayores que cero leidos
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int numero,conteo=0;


	do{
	 cout<<"introduzca un numero "<<endl;
		cin>>numero;
		
		if(numero>0){
			conteo++;
		}	
	}

	while(numero != 0);
		cout<<"/n El numero de valores mayores a cero es: "<<conteo<<endl;
	getch();
	return 0;
}

