/* Primos en un intervalo*/


#include <iostream>
using namespace std;

/* MODULOS */

void LeerIntervalo(int &param1, int &param2){
    cout << "Bienvenido a mi programa para calcular el total de primos en un intervalo..." << endl;
    cout << "Por favor, introduzca el primer número del intervalo: ";
    cin >> param1;
    cout << "Por favor, introduzca el segundo número del intervalo: ";
    cin >> param2;
}

int CalcularTotalPrimosIntervalo(int x1, int x2){
  
    //aquí­ el algoritmo

	bool posibleprimo = true; 


    	for (int i = x1; i < x2 ; i=i+1) { // Desde divisor (i) = 2 [ entre uno se supone que ya es 							divisible] hasta divisor (i) más pequeño que 							número introducido.ç

	if (numero % i == 0 ) { // Va dividiendose el número entre los divisores (i) de forma 							iterativa. Y si da 0 el resto, ya no sería primo.
		posibleprimo = false;
		
		}
	}

	if (posibleprimo == false ) {
		return primo=false;
	}
	else {
		return primo=true;
	}
}


    return totalprimos;
}

void ImprimirTotalPrimos(int total, int a, int b){
    cout << "El total de primos en el intervalo [" << a << "," << b << "] es " << total << endl;
}

int main(){
    //Declaración variables que representan el intervalo [a,b]
    int a = 0, b = 0;
    //Declaración de la variable que almacenará el total de los primos
    int totalprimos = 0;
    
    //cout << "debug: El valor de a = " << a << endl;
    //cout << "debug: El valor de b = " << b << endl;
    LeerIntervalo(a,b);
    //cout << "debug: El valor de a = " << a << endl;
    //cout << "debug: El valor de b = " << b << endl;
    totalprimos = CalcularTotalPrimosIntervalo(a,b);
    ImprimirTotalPrimos(totalprimos, a, b);
}
