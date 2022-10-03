/* 	Hacer un programa que realice la serie Fibonacci ->1,1,2,3,5,8,13,..n*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n,x=0,y=1,z=1;
	
	cout<<"introduca el valor de n :"<<endl;
	cin>>n;
	cout<<z<<" ";//
	for(int i=1;i<n;i++){
		z=x+y;
		cout<<z<<" ";//
		x=y;
		y=z;
	}
	
	getch();
	return 0;
}
