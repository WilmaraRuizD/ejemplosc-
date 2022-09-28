//primer programa 
#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
	
	cout<<"Hola Mundo " <<endl;  ///muestra en pantalla 
	
     //tipo de datos variables (int-bool-string-float"0.54" double "0.45874"-char )
     
     int num1=15 ;
     float flotante=10.45;
     double mayor=16.3456;
     char letra='a';
     
     cout<<num1 <<endl;
     cout<<flotante <<endl;
     cout<<mayor <<endl;
     cout<<letra <<endl;
     
     //LECTURA Y ENTRADA DE DATOS 
     int numero ;
     
     cout<<"Digite un numero";
     cin>>numero;
     
     cout<<"\nEl numero que digito es: "<<numero ; //los simbolos <<es concatenar en javascript
     
	return 0;   //se le debe decir al programa que finalizo correctamente 
	
	/* esto es para comentario para de multiples lineas. 
	*/
	
}