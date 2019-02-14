#include <iostream>
using namespace std;

int main () {
		
	const int num_notas=5;
	double notas [num_notas], media;

	for (int i=0; i<num_notas; i++) {
		cout<< "Introduce nota del alumno"<< endl;
		cin>>notas[i];
		}

	media = 0;

	for (int i=0; i<num_notas; i++) {
		media +=notas[i];
	}

	media /= num_notasg;
	
	cout << " Media = " << media << endl;

}
