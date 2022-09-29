//escriba un programaque lea cuatro notas de un alumnos y calcule la nota final media 
#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
float nota1,nota2,nota3,nota4;
float promedio=0;

cout <<"Escriba la nota1 del alumno:"<<endl;
cin>>nota1;
cout <<"Escriba la nota2 del alumno:"<<endl;
cin>>nota2;
cout <<"Escriba la nota3 del alumno:"<<endl;
cin>>nota3;
cout <<"Escriba la nota4 del alumno:"<<endl;
cin>>nota4;

promedio=(nota1+nota2+nota3+nota4)/4;

cout<<"El promedio es de:"<<promedio<<endl;

return 0;
}