/*el programa recibe de manera estandar el precio del producto y calcula su iva mostrando un precio total*/
#include <iostream> 

using namespace std;


int main(){

int  precioInicial,  porcentajeIva=0 , precioTotal=0; ///se declaran variables iniciales

cout<<"Por favor escriba el precio neto:"<< endl;
cin>>precioInicial;
  
porcentajeIva=precioInicial * 0.19;
precioTotal=precioInicial+porcentajeIva;

cout<<"El precio del producto es :"<<precioInicial <<endl;
cout<<"Por favor escriba el precio neto:"<< porcentajeIva << endl;
cout<<"El precio total es:"<< precioTotal << endl;

return 0;
}