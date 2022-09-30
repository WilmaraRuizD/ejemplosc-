/*Escriba un programa que lea dos numeros y determine cual de ellos es mayor */


#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
int dato1,dato2;

cout<<"escriba el numero 1 ";cin>>dato1;
cout<<"escriba el numero 2 ";cin>>dato2;

if(dato1>dato2){
	cout<<dato1<<"Es mayor que"<<dato2 <<endl;
} else{
	cout<<dato2 <<"Es meyor que" <<dato1 <<endl;
}
return 0;
}