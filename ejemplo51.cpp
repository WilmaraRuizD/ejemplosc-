/*Escriba un programa que defina un vector de numeros y calcule si exite algun numero en el vector cuyo valor equivalente de la suma del resto de numero del vector */
#include <iostream>
#include<conio.h>

using namespace std;


int main(){

int vector[5]={1,4,3,11,2};
int suma=0,mayor=0;
 
 for (int i=0;i<5;i++){
 	suma+=vector[i];
 	if(vector[i]>mayor){
 		mayor=vector[i];
 		
	 }
	 
 }
 
 if(mayor == suma-mayor){
 	cout<<"El numero "<<mayor<<"equivale a la suma de los demas elementos"<<endl;
 	
 }else{
 cout<<"no existe el numero que sea igual a la suma de los demas"<<endl;
 }
 getch();

return 0;
}