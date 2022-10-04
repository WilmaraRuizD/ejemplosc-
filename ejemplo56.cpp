/*hacer una matriz de tipo entera de 2*2, llenarla de numeros y luego copiar todo su 
contenido hacia otra matriz*/

#include <iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num[2][2]={{1,2},{3,4}};
	//pasando contenido de marix uno a matrix dos 
	int num1[2][2];
	
		for(int i=0;i<2;i++){
		
		 for (int j=0;j<2;j++){
		 	
		 	num1[i][j]=num[i][j];
		 	
		 }
		}
			cout<<"la matriz es :"<<endl;
			
			
			for(int i=0;i<2;i++){
		
		 for (int j=0;j<2;j++){
		

                     cout<<num1[i][j];
}
cout<<"\n";
}
	getch();
	return 0;
}

