#include <iostream>
#include <stdio.h>

using namespace std;

void cuentaregresiva(int numero){
		if (numero==0) return;
		cout<< numero <<endl;
		cuentaregresiva(numero-1);
	}
	
int main(){
	int a;
	cout<< "Ingresa un numero para realizar cuentas regresiva: " <<endl;
	cin>>a;
	cuentaregresiva(a);
	return 0;
}
