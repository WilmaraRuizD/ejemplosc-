/*array de matriz 

int num[2][3]={1,2,3, 4,5,6};
int num[2][3]={1,2,3},{4,5,6};

hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y 
posteriormente mostrar la matriz en pantalla 
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,colunmas ;
	
	cout<<"introduzca el numero de filas: "<<endl;cin>>filas;
	cout<<"introduzca el numero de colunmas: "<<endl;cin>>colunmas;
	
	//se almacena elementos en matrix
	for(int i= 0;i<filas;i++){
		for(int j=0;j<colunmas;j++){
		cout<<"digite un numero ["<<i<<"["<<j<<"]: ";
		cin>>numeros[i][j];
		}
	}
	
	//ver los elementos;
	
	for(int i= 0;i<filas;i++){
		for(int j=0;j<colunmas;j++){
		cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	
	
	getch();
	return 0;
}