/*Estructura Repetitivas

Ejemplo 14:

En clase de 5 alumnos se han realizado tres examenes y se requiere determinar el 
numero de :

A)alumnos que aprobaron todos los examenes.
b)alumnos que aprobaron al menos un examen.
c)alumnos que aprobaron unicamente el ultimo examen. 

Realice un programa que permita la lectura de los dotos y el calculo estadisticas.

*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float examen1,examen2,examen3;
	int aprobadoTodos =0,aprobadoUno=0,aprobadosFinal=0;
	
	for(int i=1;i<=5;i++){
		
		cout<<i<<".Digite las nota del primer examen :";cin>>examen1;
		cout<<i<<".Digite las nota del segundo examen :";cin>>examen2;
		cout<<i<<".Digite las nota del tercer examen :";cin>>examen3;
		cout<<"\n";
		
		if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
			
		aprobadoTodos ++ ;
		}
		if((examen1>10.5)||(examen2>10.5)||(examen3>10.5)){
			aprobadoUno ++ ;
		}
		
		if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
			aprobadosFinal ++ ;
		}
	}
	cout<<"\n Alumnos que aprobaron todos los examenes :"<<aprobadoTodos<<endl;
	cout<<"\n Alumnos que aprobaron al menos un examen :"<<aprobadoUno<<endl;
	cout<<"\n Alumnos que aprobaron unicamente el ultimo examen :"<<aprobadosFinal<<endl;
	
	getch();
	
return 0;
}