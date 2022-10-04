/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicandolo
 por 2y muestre el segundo arreglo */



#include <iostream>
#include<conio.h>

using namespace std;


int main(){
	int var1[5],var2[5];
	
	//leemos los elementos:
	
	for(int i=0;i<5;i++){
		
		cout<<(i+1)<<"Digite los numero del arreglo: ";
		cin>>var1[i];
	}
	//se multiplica todos los arregolos 
	for(int i=0;i<5;i++){
	var2[i]=var1[i]*2;
	}
	cout<<"\nMostrar el arreglo por 2 :"<<endl;
	for(int i=0;i<5;i++){
	cout<<var2[i]<<" ";
}
	
getch();	
return 0;
}