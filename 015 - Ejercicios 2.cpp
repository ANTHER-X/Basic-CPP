/*Ejercicios:

PUEDES USAR CUALQUIER DE LAS 2 FORMAS DE ARRAYS

1: pide una cantidad de numeros y sumalas
2; Pide una cantidad estatica de calificaciones, sumalas y da el resultado del promedio
3; Pidele al user ingresar el N cantidad de numeros y busca el numero mayor y menor de estos
*/

#include <array>
#include <iostream>
#include <conio.h>

int main(int argc, char** argv){
	
	//Ejericicio 1
	std::array<int, 4> numerosSumar;
	int sumaNumeros = 0;
	std::cout << "ingresa 4 numeros." << std::endl;
	for(int i=0; i<4; i++){
		std::cin >> numerosSumar[i];
		sumaNumeros += numerosSumar[i];
	}
	std::cout << "La suma de los numeros es: " << sumaNumeros << std::endl;
	
	
	
	//Ejercicio 2
	int numerosSumar2[4];
	int sumaNumeros2 = 0;
	std::cout << "ingresa 4 numeros." << std::endl;
	for(int i=0; i<4; i++){
		std::cin >> numerosSumar2[i];
		sumaNumeros2 += numerosSumar2[i];
	}
	
	//sacamos la cantidad de elementos
	size_t cantNumeros = sizeof(numerosSumar2) / sizeof(numerosSumar2[0]);
	
	std::cout << "El promedio es de: " << (sumaNumeros2 / cantNumeros) << std::endl;
	
	
	//Ejercicio 3
	std::array<int, 8> numerosBusca;
	int numMin = 2147483647, numMax = -2147483648;
	
	std::cout<<"ingresa 8 numeros." << std::endl;
	
	for(int i=0; i<numerosBusca.size(); i++){
		std::cin>>numerosBusca[i];
		
		if(numerosBusca[i] < numMin) numMin = numerosBusca[i];
		if(numerosBusca[i] > numMax) numMax = numerosBusca[i];
	}
	
	std::cout << "El numero maximo es: " << numMax << " Y el numero Minimo es: " << numMin << std::endl;
	
	std::cout << "Preciona Enter para finalizar el programa... ";
	getch();
	return 0;
}
