#include <iostream>
using namespace std;
/* Escribir un programa que lea un vector de 10 n�meros enteros. 
Deber� mostrar el mismo vector por pantalla pero invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 
el programa deber�a imprimir 10 9 8 7 6 5 4 3 2 1.*/
int main(int argc, char *argv[]) {
	int vector [10];
	cout << "Ingrese 10 numeros enteros: " << endl;
	for (int i=0; i<10 ; i++){
		cin >> vector[i];
	}
	
	cout << "El vector leido de forma inversa es: " << endl;
	for (int i = 10 - 1; i>=0; i--){
		cout << vector[i] << endl;
	}
	return 0;
}

