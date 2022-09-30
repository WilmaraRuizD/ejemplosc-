//Escriba un programa que lea tres numeros y determine cual de ellos es mayor 

/*Escriba un programa que lea dos numeros y determine cual de ellos es mayor */


#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){

int num1,num2,num3;

cout<<"Por favor digite los 3 numero: ";
cin>>num1>>num2>>num3;

if((num1>num2)&&(num1>=num2)){
	cout<<"\n El mayor es valor es : "<<num1 <<endl;
}
 else if ((num2>num1) && (num2>=num3)){
	cout<<"\nEl mayor es valor es : " <<num2 <<endl;
}

 else if ((num3>num1) && (num3>num2)){
	cout<<"\n El mayor es el valor es: " <<num3 <<endl;
}


else {
		cout<<"los numeros son iguales " <<endl;
}
return 0;
}