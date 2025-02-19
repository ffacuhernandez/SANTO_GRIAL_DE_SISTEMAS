#include <iostream>
using namespace std;

// Funci�n para mostrar un arreglo din�mico
void mostrararreglo(int* array, int tamanio){
	for (int i = 0; i < tamanio; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
	
	// Funci�n para agregar un nuevo valor en una posici�n espec�fica
	void agregarEnPosicion(int*& array, int& tamanio, int valor, int posicion){
		// Verificar si la posici�n es v�lida
		if (posicion < 0 || posicion > tamanio) {
			cout << "Posici�n inv�lida" << endl;
			return;
		}
		
		// Crear un nuevo arreglo con un tama�o mayor
		int* aux = new int[tamanio + 1];
		
		// Copiar los elementos del arreglo original antes de la posici�n
		for (int i = 0; i < posicion; i++) {
			aux[i] = array[i];
		}
		
		// Insertar el nuevo valor en la posici�n especificada
		aux[posicion] = valor;
		
		// Copiar los elementos del arreglo original despu�s de la posici�n
		for (int i = posicion; i < tamanio; i++) {
			aux[i + 1] = array[i];
		}
		
		// Liberar la memoria del arreglo original
		delete[] array;
		
		// Actualizar el puntero del arreglo
		array = aux;
		
		// Incrementar el tama�o del arreglo
		++tamanio;
	}
		
		int main() {
			int tamanio = 3, valor, posicion;
			
			// Crear el arreglo din�mico
			int* array = new int[tamanio]{1, 2, 3};
			
			// Mostrar el arreglo original
			cout << "Arreglo original: " << endl;
			mostrararreglo(array, tamanio);
			
			// Solicitar al usuario el valor y la posici�n para agregar
			cout << "Ingrese un numero para agregar: " << endl << ">";
			cin >> valor;
			cout << "Ingrese la posici�n para agregar el n�mero (0 a " << tamanio << "): " << endl << ">";
			cin >> posicion;
			
			// Agregar el valor en la posici�n especificada
			agregarEnPosicion(array, tamanio, valor, posicion);
			
			// Mostrar el arreglo con el nuevo valor agregado
			cout << "Con valor agregado: " << endl;
			mostrararreglo(array, tamanio);
			
			// Liberar la memoria al final
			delete[] array;
			
			return 0;
		}
		
