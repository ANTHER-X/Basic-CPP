/*
 * Proyecto: Basic C++
 * Autor: ANTHER-X
 * GitHub: https://github.com/ANTHER-X
 * Licencia: MIT
 */

//Ejercicio Calculadora

/*
Tienes que hacer una calculadora usando 
1; bucles
2; switch (opciones para eleguir la operacion)
3; input
4; output (resultado)
*/

#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <cmath>

int main(int argc, char** argv){
	
	/*Varianles para eleguir opcion, tomar datos de las operaciones*/
	int opc;
	double a,b,resultado;
	
	//bucle para la calculadora, nos servira para usarla en bucle hasta que salga de esta
	do{
		//ah, si, la exprecion "\n", da un salto de linea en Windows (no, mac o Linux)
		std::cout << "Calculadora.\nSuma (1).\nResta (2).\nMultiplicacion (3).\nDivicion (4).\nPotencia (5).\nRaiz (6).\nSalir (7).\nOPC: ";
		std::cin >> opc;
		
		//rompe el ciclo si quiere salir
		if(opc == 7) break;
		
		//si no quiere salir y si no va a potenciar
		if(opc != 5 && opc != 6){
			std::cout << "Ingresa el numero 1: ";
			std::cin >> a;
			
			std::cout << "Ingresa el numero 2: ";
			std::cin >> b;
		}
		
		//switch para las opciones
		switch(opc){
			
			//suma
			case 1: resultado = (a+b);  break;
			
			//resta
			case 2: resultado = (a-b);  break;
			
			//multiplicacion
			case 3: resultado = (a*b);  break;
			
			//divicion
			case 4: resultado = (a/b);  break;
			
			//potencia
			case 5:
				std::cout << "Ingresa el numero a potenciar: ";
				std::cin >> a;
				std::cout << "ingresa el denominador: ";
				std::cin >> b;
				resultado = (pow(a,b));
			break;
			
			//raiz
			case 6: 
				
				std::cout << "Ingresa el numero a sacar Raiz: ";
				std::cin >> a;
				resultado = (sqrt(a));
			break;	
		}
		
		std::cout << "El resultado es: " << resultado << "." << std::endl;
		
		
	}while(opc != 7);
	
	
	std::cout << "Ingresa 'Enter' para finalizar el programa... ";
	getch();
	return 0;
}

