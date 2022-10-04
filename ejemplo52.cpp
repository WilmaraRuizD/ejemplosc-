/*Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores en un nuevo vector,
situando el primer lugar los elementos del primer vector eguidos por los elementos del segundo vector, muestre el contenido del nuevo vector en la salida estandar
*/

#include <iostream>
#include<conio.h>

using namespace std;


int main(){
	char resultado[10];
	char var1[]={'a','b','c','d','e'};
	char var2[]={'w','+','p','i','u'};
	
	//copiando arreglo de mi primer elemento
	for(int i=0;i<5;i++)
	{
		resultado[i]=var1[i];
	}
		//copiando arreglo de mi segundo elemento elemento
	for(int i=5;i<10;i++)
	{
		resultado[i]=var2[i-5];	}
		
		//Mostrar el nuevo elemento 
		for(int i=0;i<10;i++){
		
		cout<<resultado[i]<<endl;
	}
getch();	
return 0;
}