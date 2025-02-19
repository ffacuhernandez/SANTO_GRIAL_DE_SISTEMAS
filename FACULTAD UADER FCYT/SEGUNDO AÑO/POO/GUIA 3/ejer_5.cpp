#include <iostream>
#include <stdlib.h>
using namespace std;

/// Realice una funci�n que dado un vector din�mico de enteros, remueva la primera
///	coincidencia de un elemento pasado por par�metro.

void busca_dato(int *&matriz, int &cantidad, int val){
	int pos = -2;
	for (int i = 0; i < cantidad; i++){
		if (val == matriz[i]){
			pos = i;
		}
	}
	if (pos != -2){
		int *aux = new int [cantidad - 1];
		for (int i = 0; i < pos; i++){
			aux[i] = matriz[i];
		}
		//SALTEANDO DATO
		for (int i = pos; i < cantidad - 1; i++){
			aux[i] = matriz[i + 1];
		} 
		delete[] matriz;
		matriz = aux;
		cantidad--;
	} else {
		cout << "DATO NO ENCONTRADO NO SE REALIZAN MODIFICACIONES" << endl;
		return;
	}
}

int main(int argc, char *argv[]) {
	int cantidad = 5, valor;
	int *matriz = new int [cantidad] {1,2,3,4,5};
	cout << "Ingrese el valor: " << endl << ">";
	cin >> valor;
	busca_dato(matriz, cantidad, valor);
	cout << "DESPUES DE LA FUNCION: " << endl;
	for (int i = 0; i < cantidad; i++){
		cout << matriz[i] << " ";
	}
	delete[] matriz;
	return 0;
}

