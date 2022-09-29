/*La sentencia if

if(condicion){
instruciones 1;
}else{instrucion 2;}
*/

#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){

int numero,dato =5;
cout<<"Digite un numero:";cin>>numero;
//==es diferente; 
if(numero!=dato){
	
	cout<<"el numero es diferente de  5:"<<endl;
}
else{
	cout<<"el numero es igual a 5:"<<endl;
}
//////////mayor que >; menor que <;
if(numero>=dato){
	
	cout<<"el numero es mayor 5:"<<endl;
}
else{
	cout<<"el numero es menor a 5:"<<endl;
}
return 0;
}

