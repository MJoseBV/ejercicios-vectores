#include <iostream>
using namespace std;

int main () {

	const int FIL=20, COL=30;
	double m [FIL][COL];
	int fil_enc, col_enc, util_fil, util_col, f, c;
	double buscado;
	bool encontrado;

	do{
		cout<< "Introducir el numero de filas: "; 
		cin >>  util_fil; 
	}while	((util_fil<1) || (util_fil>FIL));

	do {
		cout << "Introducir el número de columnas: ";
		cin >> util_col;
	}while ((util_col<1)|| (util_col>COL));
	
	for (f=0; f<util_fil; f++){
		for (c=0; c<util_col;c++){
			cout << "Introducir el elemento ("<< f << "," << c <<"):" << endl;
			cin >> m[f][c];
		}
	}
	for (f=0; f<util_fil; f++){
		for (c=0; c <util_col; c++) {
			cout<< "Matriz: " << m [f][c]<< endl;
		}
	}
	cout << "Introduce el elemento a buscar: ";
	cin >> buscado;

	encontrado=false; 
	for (f=0; !encontrado && (util_fil); f++){
		for (c=0; !encontrado && (c<util_col); c++){
			if (m[f][c]== buscado) {

			encontrado =true;
			fil_enc =f; col_enc=c;
			}

		}
	}
	
	if (encontrado){
	cout << "Encontrado en la posición " << fil_enc << ","<< col_enc<< endl;

	}
	else {
	 cout << "EleSmento no encontrado" ;
	}
	return 0;
}
