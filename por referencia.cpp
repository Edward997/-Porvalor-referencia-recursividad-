#include <iostream>
#include <stdio.h>

using namespace std;

void incrementa(int& n){
	n=n+1;
}

int main(){
	int b;
	cout<< "Introduce un numero: " <<endl;
	cin>> b;
	incrementa(b);
	cout << b <<endl;
	return 0;
}
