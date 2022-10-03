/*La sentencia for 

for(expr1;expresion logico;expr2){
conjunto de instrucciones;
}
*/

#include<iostream>
#include<conio.h>//se usa para no cerrar el programa 

using namespace std;

int main(){
	int i;
	for(i=10; i>=1; i--){
		cout<<i<<endl;
	}
	getch();
	return 0;
	
}