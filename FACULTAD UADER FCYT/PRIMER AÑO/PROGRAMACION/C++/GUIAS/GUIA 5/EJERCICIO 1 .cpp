#include <iostream>
using namespace std;
/* a) Declarar un vector llamado n�meros con la capacidad suficiente para almacenar 
las edades de todos los alumnos de la comisi�n. b) Ingresar la cantidad de alumnos que posee 
la comisi�n y luego almacenar en el vector las edades de todos los alumnos. c) Ingresar una posici�n y 
informar la edad almacenada en ella. Repetir c) hasta que se ingrese una posici�n no v�lida.*/
int main(int argc, char *argv[]) {
	int numeros [100];
	int alumnos;
	int pos;
	cout << "Ingrese la cantidad de alumnos que posee la comision: ";
	cin >> alumnos;
	for (int i=0; i<alumnos; i++){
		cout << "Ingrese la edad del alumno: ";
		cin >> numeros[i+1];
	}
	cout << "Ingrese la posicion del alumno que desea conocer la edad: ";
	cin >> pos;
	while (pos <= alumnos){
		cout << "La edad del alumno posicion es: " << numeros[pos] << endl;
		cout << "Ingrese la posicion del alumno que desea conocer la edad: ";
		cin >> pos;
	} 
	return 0;
}

