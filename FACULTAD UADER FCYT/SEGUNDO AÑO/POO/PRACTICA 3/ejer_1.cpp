#include <iostream>

using namespace std;

// Funci�n para imprimir un arreglo din�mico
void imprimirArreglo(int* arr, int tama�o) {
	for (int i = 0; i < tama�o; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Funci�n para agregar un nuevo valor en la �ltima posici�n
void agregarAlFinal(int*& arr, int& tama�o, int valor) {
	// Crear un nuevo arreglo con un tama�o mayor
	int* nuevoArr = new int[tama�o + 1];
	
	// Copiar los elementos del arreglo original al nuevo arreglo
	for (int i = 0; i < tama�o; ++i) {
		nuevoArr[i] = arr[i];
	}
	
	// Agregar el nuevo valor al final
	nuevoArr[tama�o] = valor;
	
	// Liberar la memoria del arreglo original
	delete[] arr;
	
	// Asignar el puntero al nuevo arreglo
	arr = nuevoArr;
	
	// Incrementar el tama�o del arreglo
	++tama�o;
}

int main() {
	int tama�o = 3;
	int* arr = new int[tama�o]{1, 2, 3};
	
	cout << "Arreglo original: ";
	imprimirArreglo(arr, tama�o);
	
	agregarAlFinal(arr, tama�o, 4);
	
	cout << "Arreglo despu�s de agregar 4: ";
	imprimirArreglo(arr, tama�o);
	
	// Liberar la memoria al final
	delete[] arr;
	
	return 0;
}
