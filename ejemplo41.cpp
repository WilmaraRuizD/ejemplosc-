/*Estructuras Repetitivas 

hacer un programaque calcule el resultado de la siguiente expresion 1-2+3-4+5-6..n
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n,par ,sumaimpares=0,sumaPares=0,sumaTotal=0;
	
	cout<<"introduzca el valor de la iteracion "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		if(i%2==0){
			par=i*-1;
			sumaPares += par;
		}else{
	
			sumaimpares+=i;
		}
	}
	
	sumaTotal=sumaPares+sumaimpares;
	cout<<"La suma Total es: "<<sumaTotal<<endl;
	
 getch();
 return 0;
}
