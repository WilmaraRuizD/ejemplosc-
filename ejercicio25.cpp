/*Escriba un programa que lea de las entradas tres numeros.despues  debe leerun cuarto numero e indicar si el 
numero coincide con alguno de los introducidos con anterioridad
*/

/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salda estandar si el caracter es una vocalminuscula 
o es unavocal mayuscula. o no es una vocal  
*/	
	#include <iostream>
	using namespace std;
	
int main(){
	
	int num1,num2,num3,num4;
	
	cout<<"Escriba el valor de numero 1, numero2, numero3";
	cin>>num1>>num2>>num3;
	///forma 1
	cout<<"Escriba el valor de numero 4";
	cin>>num4;
	
	if(num1==num4){
		cout<<"El valor de numero"<<num4<<"es igual a :"<<num1;
	}
	
	else if(num2==num4){
		cout<<"El valor de numero"<<num4<<"es igual a :"<<num2;
	}
		else if(num3==num4){
		cout<<"El valor de numero"<<num4<<"es igual a :"<<num3;
	}
	else{
		cout<<"El valor de numero: "<<num4<<"es igual a :"<<num2;	
}

//forma 2 
if((num1==num4)||(num1==num4)||(num1==num4)){
	cout<<"El valor coincide con aguno de los numeros ";
}
else{
cout<<"\n El valor no coincide con ninguno de los numeros ";	
}	
return 0;
	
}