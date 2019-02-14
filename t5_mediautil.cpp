#include <iostream>
using namespace std;

int main() {
	
	const int num_notas = 5;
	double notas [num_notas];
	int util_notas=0;
	double media;

	do{

		cout << "Introduce número de alumnos entre 1 y " << 			num_notas << endl;	
		cin >> util_notas;

	} while  (util_notas <1 || util_notas>num_notas );

	for (int i=0; i<util_notas; i++) {
		cout << "nota [" << i << " ]: ";
		cin >> notas [i];

	}
		media=0;
	

	for (int i=0; i<util_notas; i++) {
		media +=notas [i];
	media /= util_notas;
	} 
	cout << "Media: " << media << endl;

}

