#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int factorial(int i){
	int z, factor =1;
	for(z=i; z>=1; z--){
		factor=factor*z;
	
	}
	i=factor;
		return(factor);
}
int main(){
	int dato, x;
	cout<< "Ingresa un numero para calcular el factorial: " <<endl;
	cin>> dato;
	x=factorial(dato); /// se le da la vartiable a la funcion
	cout<< "Factorial (n): " << x << "\n";
	
	return 0;
}
