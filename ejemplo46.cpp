/*vectores arreglos array almacenas una secuencia o posicion 

tipo nombre[Tamaño];

ejemplo 

int numeros[10];
char letras[5];
int numero[]={1,4,6,7,3},

numero[0]=!;
numero[!]=4;
numero[2]=6;
numero[3]=7;
numero[4]=3;

char letra[]={'a',´e´,´i´,´o´,´u´};


escriba un programa que defina un vector de Numeros y calcule la suma de sus elementos*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int vectorNumeros[]={8,5,6,7,23};
	int suma ;
	
	for(int i=0;i<5;i++){
		suma+=vectorNumeros[i];
	}
	cout<<"La suma es igual: "<<suma<<endl;
	
	getch();
	return 0;
}


