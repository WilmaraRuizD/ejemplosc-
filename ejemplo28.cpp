/*hacer un menu considere las siguientes opciones:
1.cubo de un numero    
2.numero par o impar 
3,salir
*/

	#include <iostream>
	#include <math.h>
	using namespace std;
	
int main(){

int num1,opcion;
float num,cubo;


cout<<"\tBienvenido, digite la opcion de su preferencia"<<endl;
cout<<"1.Cubo de un numero"<<endl;
cout<<"2.numero par oimpar "<<endl;
cout<<"3.salir: "<<endl;
cout<<"Opcion: ";
cin>>opcion;

switch(opcion){
	case 1: cout<<"Digite un numero";cin>>num;
			num=pow(num,3);
			cout<<"EL cubo del numero es :"<<num ;break;
	case 2: cout<<"Digite un numero";cin>>num1;
			if(num1%2==0){
				
				cout<<"\n El numero es par";break;
			}else
			{	cout<<"\n El numero es impar ";break;
			}
	 default: cout<<"Gracias por usar nuestro servicio";break;
}

return 0;
}