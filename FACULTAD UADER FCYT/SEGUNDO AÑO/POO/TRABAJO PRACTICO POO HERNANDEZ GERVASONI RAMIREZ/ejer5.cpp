#include <iostream>
#include <fstream>
using namespace std;

// RAMIREZ - HERNANDEZ - GERVASONI
/* ACTIVAD 5: Considere que se dispone de un archivo datos.txt donde se almacena en cada l�nea: un
n�mero de orden(un entero), un a�o de nacimiento (un entero), un nombre y un apellido
separados por un espacio. Escribir un programa para indicar cu�ntos alumnos nacieron
antes del a�o 1995.*/

int main(int argc, char *argv[]) {
	
	int num_orden, anio_nac, contador = 0;
	string nya;
	
	ifstream archivo;
	archivo.open("datos.txt");
	if (archivo.fail()) {
		cout << "ERROR AL ENCONTRAR/ABRIR EL ARCHIVO" << endl;
		return -1;
	} else {
		while (archivo >> num_orden){
			archivo >> anio_nac;
			if (anio_nac < 1995){
				contador++;
			}
			archivo.ignore();
			getline(archivo, nya);
		}
	}
	
	cout << contador << " alumnos nacieron antes del anio 1995";
	return 0;
}

