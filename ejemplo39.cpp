/*Escriba un programa que calcule el valor de 1!+2!+3!+ ...+n*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int nElementos,factorial=1,suma=0;
	
	cout<<"introduz el numero de elementos a sumar: ";
	cin>>nElementos;
	
	for(int i=1;i<=nElementos;i++){
		
		factorial*=i;
		suma+=factorial;
	
	}
	
		cout<<"El resultado es :"<<suma<<endl;
		
	getch();
	return 0;
}