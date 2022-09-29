/*
	break;
case literaln
	conjunto de instrucciones;

*/


#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
int numero;
cout<< "Digite un numero entre 1-5" <<endl;
cin>>numero;

switch(numero){
	case 1:cout<<"El numero es 1"; break ;
	case 2:cout<<"El numero es 2"; break ;
	case 3:cout<<"El numero es 3"; break ;
	case 4:cout<<"El numero es 4"; break ;
	case 5:cout<<"El numero es 5"; break ;
	default:cout<<"El numero no esta en el rango de 1 y 5"; break ;
}

return 0;
}