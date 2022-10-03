/*Esctructura Repetitiva 

Ejercicio 6:

Escriba un programa que calcule X^y donde tanto x como y son enteros positivos, sin usar la funcion pow 

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,y,elevacion=1;
	
	cout<<"Escriba el valor de x :"<<endl;
	cin>>x;	
	
	cout<<"Escriba el valor de y :"<<endl;
	cin>>y;	
	

		for(int i=1;i<=y;i++){
			
		elevacion=elevacion * x;
	
		}
		cout<<"/n Elevacion es igual a :"<<elevacion <<endl;
		
	
	getch();
	return 0;
}