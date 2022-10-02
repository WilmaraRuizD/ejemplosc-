/*Mostrar los meses del año pidiendole al usuario un numreo del 1-12 y mostrando Los meses que correspondan */

	#include <iostream>
	using namespace std;
	
int main(){
	
	int meses ;
	
	cout<<"introduzca el numero del meses";
	cin>>meses;
	
		switch(meses){
		case 1:  cout<<"Enero";break;
		case 2:  cout<<"Febrero";break;
		case 3:  cout<<"Marzo";break;
		case 4:  cout<<"Abril";break;
		case 5:  cout<<"Mayo";break;
		case 6:  cout<<"Junio";break;
		case 7:  cout<<"Julio";break;
		case 8:  cout<<"Agosto";break;
		case 9:  cout<<"Septiembre";break;
		case 10: cout<<"Octubre";break;
		case 11: cout<<"Noviembre";break;
		case 12: cout<<"Diciembre";break;
	    default: cout<<"numero no corresponde a ningun mes";break;
	}
	
	
return 0;
}