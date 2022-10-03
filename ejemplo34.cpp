/*Estructuras Repetitivas

escriba un programa que tome cada 4 horas la temperatura exterior,
leyendola durante un periodo de 24 horas es decir , debe leer 6 temperaturas.calcule la temperatura media del dia,
 latemperatura mas a la mas baja */
 

#include<iostream>
#include<conio.h>

using namespace std;
 
 int main(){

 	float temperatura,mayor=0,menor=999;
 	float sumaTotal=0,promedio=0;
 	
 	for(int i=0 ;i<24;i+=4){
 		
 		cout<<"Digite la temperatura de la hora "<<i<<" : ";
 		cin>>temperatura;
 		
 		sumaTotal+=temperatura;
 		
 		if(temperatura>mayor){
 			mayor=temperatura;
		 }if(temperatura < menor){
		 	menor=temperatura ;
		 }
	 }
	 promedio= sumaTotal/6;
	 
	 cout<<"La temperatura promedio es : "<<promedio<<endl;
	 cout<<"La temperatura minima es : "<<menor<<endl;
	  cout<<"La temperatura mayor es : "<<mayor<<endl;
	 
 	getch();
 	return 0;

 }