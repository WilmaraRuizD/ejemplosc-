//la sentencia do while 
/*
do{
 conjunto de intrucciones 
}while(expresion logica)
*/

/*WILE(eXPRESION LOGICAS){CONJUNTO DE INSTRUCIONES }*/

#include<iostream>

//#include<conio.h>//se usa para no cerrar el
#include<stdlib.h>//se usa para no cerrar el programa 

using namespace std;

int main(){

	int i;
	i=100;

	do{
			cout<<i<<endl;
			i--; 
			}while(i>=10);

		//getch();//instruccion que  no cierra el programa 
		system("pause");//instruccion que  no cierra el programa 
		return 0;
	}