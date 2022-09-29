/*la calificacion final de unestudiante es el promedio de tres notas:
-la nota de practicas que cuenta un 30%del total
-la nota teorica que cuenta un 60%
-la nota de participacion que cuenta el 10% restante 

escriba un programa que lea las tres notas del alumno y escriba su nota final
*/
#include <iostream> //ENTRADA Y SALIDA DE DATOS 

using namespace std; // se indica que se esta usando la salida estandar 

int main(){
float notaPractica,notaTeorica,notaParticipacion, resultado;

cout<< "Escriba el valor de la nota de practica:" <<endl; cin>>notaPractica;

cout<< "Escriba el valor de la nota de Teorica:"<<endl;  cin>>notaTeorica;

cout<< "Escriba el valor de la nota de participacion:" <<endl; cin>>notaParticipacion;

notaPractica *= 0.30;
notaTeorica *=  0.60;
notaParticipacion*= 0.10;

resultado=notaPractica+notaTeorica+notaParticipacion;
cout<< "Usted tiene una calificacion total de:"<< resultado << endl;


return 0;
}