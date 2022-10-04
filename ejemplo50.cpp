/*Desarrolle un programa que lea de la entrada standar un vector de enteros y determine el mayor elemento del vector  */

#include <iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int var[100],n,mayor=0;
	
	cout<<"Por favor digite el numero de elementos de su vector "<<endl;cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<".Digite un numero: ";cin>>var[i];
		
		if(var[i]>mayor){
			mayor=var[i];
	    	}				
		}
		
	cout<<"\nEl mayor elemento es"<<mayor<<endl;
	getch();	
	
	return 0;
	
}