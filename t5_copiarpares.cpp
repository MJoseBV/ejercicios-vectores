#include <iostream>
using namespace std;



void imprimeVector2(const int vector2[], int util_vector2){
    cout << "Vector2 = { ";
    for (int i=0; i < util_vector2; i++){
        cout << vector2[i] << " ";
    }
    cout << "}" << endl;
}




int copiarPares (const int vector1[], int util_vector1,  int vector2[], int &util_vector2) {


	for(int i = 0;i < util_vector1; i++){

		if (vector1[i] % 2==0){
		
			vector2[util_vector2]=vector1[i];
			//cout << vector2[util_vector2]<< endl;
			util_vector2++;				

		}
	
	}
}

void imprimeVector1 (const int vector1[], int util_vector1){
    cout << "Vector1 = { ";
    for (int i=0; i < util_vector1; i++){
        cout << vector1[i] << " ";
    }
    cout << "}" << endl;
}






int main () {


	const int DIM_VECTOR1=100;
	int vector1[DIM_VECTOR1]={4,5,6,7,8};
	int util_vector1 = 5;

	const int DIM_VECTOR2=100;
	int vector2[DIM_VECTOR2]={0};
	int util_vector2 = 0;




	/*const int DIM_VECTOR1 = 10;
	int vector1 [DIM_VECTOR1]= {1,2,4,7};
	int util_vector1=4;


	const int DIM_VECTOR2 = 10;
	int vector1 [DIM_VECTOR2]= {0};
	int util_vector2=4;*/

	// 1º Imprimir vector1
	imprimeVector1 (vector1, util_vector1);
	// 2º Copiar pares del vector1 en vector2
	copiarPares (vector1, util_vector1, vector2, util_vector2);

	// 3º Imprimir vector2
	imprimeVector2 (vector2, util_vector2);
	



}





 

	
