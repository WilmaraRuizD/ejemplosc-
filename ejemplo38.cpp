/*Escriba un programa que calcule elvalor de :1*2*3*..*n (factorial del numero9 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int n,factorial=1;
	
	cout<<"itroduzca el valor de n"<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *=i ;
	
	cout<<"El valor es :"<<factorial<<endl;	
	}
	
	
	system("pause");
	return 0;
}