#include <iostream>
using namespace std;
/*Generar un vector num�rico de N elementos, luego 
ingrese por cada elemento: posici�n en el vector y valor a asignar. El valor N se ingresa como primer dato.*/

int main(int argc, char *argv[]) {
	int num[100],tamaniovector,posicion;
	
	cout << "Ingrese tama�o del vector " << endl << "> ";
	cin >> tamaniovector;
	cout << "Ingrese posicion a ingresar :" << endl << "> ";
	cin >> posicion;     
	
	while (posicion<=tamaniovector){
		cout << "Ingrese el valor: " << endl;
		cin >> num[posicion-1];    
		cout << "Ingrese siguiente posicion a ingresar: "<<endl;
		cin >> posicion;
	}
	
	if (posicion>tamaniovector){
		cout << "----------------------" << endl;
		cout << "ESA POSICION NO EXISTE" << endl;
	}
	
	
	cout << "El vector qued� como:" << endl;
	for(int i=0;i<tamaniovector;i++){
		cout << num[i] << endl;
	}
	
	return 0;
}

