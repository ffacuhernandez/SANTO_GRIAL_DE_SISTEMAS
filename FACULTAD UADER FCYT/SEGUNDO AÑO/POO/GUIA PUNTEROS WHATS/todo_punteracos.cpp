#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//a
	float *p;
	double *p;
	
	//b
	int (*p)[15];
	p = new int [10][15];
	delete[] p;
	
	//c
	float *matriz[10];
	for (int i = 0; i < 10; i++){
		matriz[i] = new float[30];
	}
	matriz[2][5] = 3.14;
	cout << "ELEMENTO [2][5] " << matriz[2][5];
	
	//d
	// Definimos una funci�n que coincida con la firma esperada
	void miFuncion(double a, double b) {
		cout << "Suma: " << (a + b) << endl;
	}
	
	int main() {
		// Declarar el puntero a funci�n
		void (*puntero)(double, double);
		
		// Asignar la direcci�n de la funci�n
		puntero = miFuncion;
		
		// Llamar a la funci�n usando el puntero
		puntero(5.5, 3.2); 
		
	}
	
	//e
	
	
	return 0;
}

