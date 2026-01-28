/*
 * Proyecto: Basic C++
 * Autor: ANTHER-X
 * GitHub: https://github.com/ANTHER-X
 * Licencia: MIT
 */

/*Ejercicios con Math.h*/

#include <iostream>
#include <conio.h>

#define _USE_MATH_DEFINES
#include <cmath>
//Por lo general esto funciona, pero por alguna razon a veces VSCode se pone raro y te pide la libreria de:
#include <corecrt_math_defines.h>

int main(int argc, char** argv){
	
	
    /*
	------------
	Ejemplos
	------------
	Podemos hacer varios ejercicios, y lo haremos, basicos pero lo haremos
	
	1; Area de un cuadrado
	2; sacar el aera de un circulo pidiendo el diametro de este
	3; Calcular la altura de un edificio usando triginometria
	4; Calcular interez compuesto usando 'e'
	*/
	
	//Ejercicio 1: Area de un Cuadrado
	float ladCuadrado;
	std::cout << "Ingresa el lado del cuadrado (en CM): ";
    std::cin >> ladCuadrado;
	std::cout << "El area del cuadrado es: " << pow(ladCuadrado,2) << "CM^2"<< std::endl << std::endl;
	
	
	
	//Ejercicio 2: Area de un circulo pidiendo el diametro
	double diametro;
	std::cout << "Ingresa el diametro del circulo (en CM): ";
	std::cin >> diametro;
	std::cout << "el area del cirulo es: " << M_PI * pow((diametro/2),2) << "CM^2" << std::endl << std::endl;
	
	
	
	//Ejercicio 3: Calcular la altura de un edificio usando trigonometria
	double distancia, anguloGrados, anguloRadianes, altura;
	
	std::cout << "Ingresa la distancia del edificio (en CM): ";
	std::cin >> distancia;
	
	std::cout << "Ingresa los angulos de vision del edificio (grados): ";
	std::cin >> anguloGrados;
	
	//Conversion de grados a radianes
    anguloRadianes = (anguloGrados * M_PI) / 180.0;
    //Altura usando la tangente
    altura = distancia * tan(anguloRadianes);
    
    std::cout << "La altura aproximada del edificio es: " << altura << " metros" << std::endl;

    //Mostrar tambi�n seno y coseno para reforzar y ver si quedo bien
    std::cout << "Componente horizontal (coseno): " << cos(anguloRadianes) << std::endl;
	std:: cout << "Componente vertical (seno): " << sin(anguloRadianes) << std::endl << std::endl;
	
	
	
	//Ejericio 4: Calcular interez compuesto usando 'e'
	double montoFinal, capital, tiempo, tasaInterez, capitAnuales;
	
	std::cout << "Ingresa tu capital actual: ";
	std::cin >> capital;
	
	std::cout << "Ingresa el interez de taza anual (en %): ";
	std::cin >> tasaInterez;
	
	std::cout << "Ingresa el tiempo (en anios): ";
	std::cin >> tiempo;
	
	std::cout << "Ingresa el numero de capitalizacion anual: ";
	std::cin >> capitAnuales;
	
	//revertimos la tasa de interez
	tasaInterez = tasaInterez/100.0;
	
	//monto final, o sea, la formula del interes compuesto discreto
	montoFinal = capital * pow(1+ (tasaInterez/tiempo), capitAnuales * tiempo );
	
	std::cout << "El monto final despues de " << tiempo << " anios sera de: " << montoFinal << std::endl << std::endl;
	
	
	std::cout << "Ingresa 'Enter' para finalizar el programa... ";
	getch();
	return 0;
}
