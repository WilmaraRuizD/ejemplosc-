/*Comprobar si un numero digitado por el usuario es positivo o negativo */
#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
	
	int num ;
	cout<<"\n Digite el numero ";
	cin>>num;
	
	if(num==0){
			cout<<"\n El numero es cero";
	}
else if(num>=1){
	cout<<"\n El numero es positivo";
}
else if(num<=-1){
	cout<<"\n El numero es negativo ";
}	
		
	return 0;
}