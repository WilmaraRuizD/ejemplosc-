/* Realice un programa que calcule la suma de dos matrices cuadradas 3X3*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numeros[3][3]={{1,0,4},{2,3,2},{4,5,6}};
	int numeros1[3][3]={{8,5,2},{1,7,9},{2,4,1}};
	
	cout<<"Se imprimen las matrix originales\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n ";
	}
	;
		cout<<"\n";
		
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			cout<<numeros1[i][j]<<" ";
		}
		cout<<"\n ";
	}
	 cout<<"\n la suma de las matrixes es :"<<endl;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<numeros[i][j]+numeros1[i][j]<<" ";
		}
		cout<<"\n";
		}
		
	getch();
	return 0;
}