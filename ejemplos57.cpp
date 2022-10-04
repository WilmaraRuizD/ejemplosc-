/*Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de numero aleatorios ,copiar el contenido a otra matriz y por ultima mostrarla en pantalla */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main(){
	
	int matrix[100][100];
	int matrix1[100][100];
	
	int filas,col,dato;
	
	cout<<"Digite el numero de filas ";
	cin>>filas;
	cout<<"digite la cactidad de colunmas de la matrix" ;
	cin>>col;
	
	srand(time(NULL));//NUMEROS ALEATORIO
	
	//rellenado matrix de numero aleatorio
	for(int i=0;i<filas;i++){
		for(int j=0;j<col;j++){
		
		dato=1+rand()%(100);//generar numero aleatorios entre 1 y 100
		matrix[i][j]=dato;
		
}

	}
	//copiando el contenido en otra matris 
	for(int i=0;i<filas;i++){
		for(int j=0;j<col;j++){
		matrix1[i][j]= matrix[i][j];
			
		}
		}
		
		//imprimir matrix en pantalla 
		
	for(int i=0;i<filas;i++){
		for(int j=0;j<col;j++){
		
		cout<<matrix1[i][j]<<" ";	
		}
		cout<<"\n";
		}
	getch();
	return 0;
	
}