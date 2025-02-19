#include <iostream>
#include <stdlib.h>
using namespace std;

/// 4) Realice una funci�n que dado un vector din�mico de enteros, remueva el elemento que se
///	encuentra en una posici�n pasada por par�metro. Si la posici�n es mayor a la cantidad de
///	elementos, la funci�n no debe remover ning�n elemento.	
void remueve_dato(int *&matriz, int &cantidad, int posicion){
	posicion = posicion - 1;
	if (posicion >= cantidad || posicion < 0){
		cout << "TROLL" << endl;
		return;
	} else {
		int *aux = new int [cantidad - 1];
		for (int i = 0; i < posicion; i++){
			aux[i] = matriz[i];
		}
		// SALTEANDO DATO
		for (int i = posicion; i < cantidad - 1; i++){
			aux[i] = matriz[i + 1];
		}
		delete[] matriz;
		matriz = aux;
		cantidad--;
	}
}

int main(int argc, char *argv[]) {
	int cantidad = 5, posicion;
	int *matriz = new int [cantidad] {1,2,3,4,5};
	cout << "Ingrese la posicion la cual desea eliminar su elemento: " << endl << ">";
	cin >> posicion;
	remueve_dato(matriz, cantidad, posicion);
	cout << "DESPUES DE LA FUNCION: " << endl;
	for (int i = 0; i < cantidad; i++){
		cout << matriz[i] << " ";
	}
	delete[] matriz;
	return 0;
}

