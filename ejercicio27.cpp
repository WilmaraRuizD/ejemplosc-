/*hacer un programa que simule un cajero automatico con un saldo inicial de 1000
dolares*/

	#include <iostream>
	using namespace std;
	
int main(){
int saldoInicial=1000;
int opciones;
 float extra,saldo=0,retiro;

cout<<"\tBienvenido a su CajeroVirtual"<<endl;
cout<<"1.Ingrese dinero en su cuenta"<<endl;
cout<<"2.Retire dinero de la cuenta"<<endl;
cout<<"3.salir: "<<endl;
cout<<"Opcion: ";
cin>>opciones;

switch(opciones){
	case 1:
		cout<<"Digite la cantidad de dinero que desea agregar: ";
	   	 cin>>extra;
		 saldo=saldoInicial+extra;
 		 cout<<"Dinero en Cuenta" <<saldo ;break;
 	case 2:
 		cout<<"Digite la cantidad de dinero que desea retirar";
	   	 cin>>retiro;
		if(retiro<saldoInicial)
		{
			 saldo=saldoInicial-retiro;
 			 cout<<"Dinero en Cuenta :"<<saldo ;break;
		
		} 
		else{
		
			cout<<"saldo insuficiente"<<endl;break;
		}

   default: cout<<"Gracias por usar nuestro servicio";break;
	 
}


return 0;
}