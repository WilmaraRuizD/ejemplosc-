/*
Realice un programa que lea una matriz de 3X3 y cree su matriz traspuesta. 
la matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original

*/

#include <iostream >
#include<conio.h>

using namespace std;

int main(){
	int numero[3][3];

	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numero[i][j];
		}
	}
	cout<<"matriz original\n";
	
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<numero[i][j]<<" ";
		}
		cout<<"\n";
		}
			cout<<"matriz transpuesta \n";
			for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			
			cout<<numero[j][i]<<" ";
		}
		cout<<"\n";
		}
		
		getch();
		return 0 ;
}