/*Escribe un programa que defina un vector de numeros y calcule la multiplicacion acumulada de sus elementos 
*/

#include <iostream>
#include <conio.h>



using namespace std;

int main(){

int numero[]={8,7,11,9,7};
int multiplicacion=1;

  for(int i=0;i<5;i++){
  	multiplicacion*=numero[i];
  }
  
  cout<<"la multiplicacion es :"<<multiplicacion<<endl;
  
  getch();
return 0;
}