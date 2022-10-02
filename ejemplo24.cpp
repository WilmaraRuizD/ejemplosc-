/*Escriba un programa que solicite una edad (un entero e indique en la salida estandar si la edad introducida esta en el rango de 18-25*/

#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
int edad;

cout<<"introdusca su edad ";cin>>edad;

switch(edad){
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:cout<<"La edad esta en el rango";break;
	default :cout<<"La edad no esta en el rango";
}

if((edad>=18)&&(edad<=25)){
	
	cout<<"El valor esta en el rango establecido "<<endl;
}
else{
cout<<"El valor esta en el rango establecido ";
}

return 0;

}