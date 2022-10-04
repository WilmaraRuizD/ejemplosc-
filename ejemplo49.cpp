/*Escria un programa que defina un vector de numeros y mueste en la salida estandar el vector en orden inverso del ultimo al primer elemento */
#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int valor [5]={12,3,4,7,8};
	
	for(int i=4;i>=0;i--){
		
		cout<<valor[i]<<endl;
	}
	
	getch();
	return 0;
	
}