
/*matrices o tablas 

Realice un programa que defina una mmatris 3X3 y escriba un ciclo para que muestre la diagonal principal de la matrix
  
*/
#include <iostream>;
#include <conio.h>;

using namespace std;

int main(){

int numero[3][3]={{2,3,4},{5,6,7},{9,10,11}};

cout<<"Mostrando matrix completa "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<numero[i][j];
	}
	cout<<"\n";
}
cout<<"mostrando diagonal principal"<<endl; 
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	
	if(i==j){
		cout<<numero[i][j]<<endl;
	}
	}
	
}

getch();
return 0;
	}