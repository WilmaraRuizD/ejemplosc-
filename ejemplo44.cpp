/*
Realice un programa que solicite al usuario que piense un numero entro
entre el 1 y el 100. El programa    debe generar un numero aleatorio en ese mismo rango
[1-100],e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio,
asi hasta que lo adivine  y por ultimo mostrarle el numero de intentos que le llevo. 

*/

#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

   int numero,conteo,numeroAliatorio;
   
   srand(time(NULL)); //Genera numeros aleatorios
   
   //variable=limite_inferio+rand()%(limite_superior + 1-limite_inferio);
   numeroAliatorio=1+rand()%(100);
   
   do{
   
   cout<<endl<<"Bienvenidos a Adivina "<<endl;
   cout<<"Por favor ingrese un numero: "<<endl;
   cin>>numero;
   
    if(numero>numeroAliatorio){
    	cout<<"\nDigite un numero menor\n";
	}
	
	if(numero<numeroAliatorio){
		cout<<"\nDigite un numero mayor\n";
		
	}
	conteo++;
	
	}while (numero != numeroAliatorio);
	
   cout<<"\nFelicidades adivinaste el numero\n";
   cout<<"\El numero de intentos: "<<conteo<<endl;
   
    system("pause");
	return 0;
}
   



