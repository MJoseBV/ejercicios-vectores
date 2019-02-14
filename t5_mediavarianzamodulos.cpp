#include <iostream>
#include <cmath>
using namespace std;



void Imprimir (int media, int desviacion, int varianza){


	cout << "Media= " << media << endl;
	cout << "Deviación media= "<< desviacion << endl;
	cout << "Varianza= " << varianza << endl;

}


int HallarVarianza(double nota[], int alumnos, int media) {

	int varianza=0;
	for (int i=0; i<alumnos; i++) {
	varianza+= (nota[i] -media) * (nota[i]-media);
	}
	varianza /= alumnos;
	
	return varianza;

}


int HallarDesviacionMedia (double nota[], int alumnos, int media){

	int desviacion=0;
	for (int i=0;i<alumnos; i++) {
	desviacion =fabs(nota[i]-media);
	}
	desviacion /= alumnos;
	
	return desviacion;
}




int HallarMedia (double nota[], int alumnos){

	
	int media=0;
	for (int i=0; i<alumnos; i++) {
	media += nota[i];
	}
	media /= alumnos;
	
	return media;
}


void PedirNota(double nota [], int util_nota, int alumnos){

	do{

		cout << "Introduce notas desde 1 hasta " << alumnos << endl;	
		cin >> util_nota;

	} while  (util_nota <1 || util_nota>alumnos );


	for (int i=0; i<util_nota; i++) {
		cout << "nota [" << i << "]: ";
		cin >> nota [i];

	}


}


int main () {

	const int alumnos = 5;
	double nota [alumnos];
	int util_nota=0, media=0, desviacion=0, varianza=0;
	
	//1º Pide notas al usuario
	PedirNota(nota, util_nota, alumnos);
	//2º Halla la Media 
	media = HallarMedia (nota, alumnos);
	//3º Hallar la Desviación Media
	desviacion=HallarDesviacionMedia (nota, alumnos, media);
	//4º Hallar la Varianza
	varianza=HallarVarianza (nota, alumnos, media);
	//5º Imprimir Media, Desviación Media y Varianza
	Imprimir(media, desviacion,varianza);

}
