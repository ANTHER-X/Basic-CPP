//Ejercicios usando lo aprendido

/*Ahora vamos hace unos pequnios ejercicios usando lo aprendido
1; mostrar si un numero ingresado es negativo, positivo o cero
2; ver si una persona es mayor de edad
3; ejercicio*/

/*Antes de hacer los ejercicios, debemos saber que el programa siempre corre, si no pones
alguna manera de pausar el programa para que el user vea lo mostrado, el programa si, mostrara
todo, pero inmediatamente terminara.
Para poder pausar un programa se usa la funcion (getch()) que esta en la libreria (conio.h), por lo
que deberemos incluirla*/

#include <conio.h>//para poder pausar el programa con "getch();"

#include <iostream>//para manejar el Input-Output

int main(int argc, char** argv){
	
	//Ejercicio 1: Mostrar si un numero ingresado es negativo, positivo o cero
	int opc;
	std::cout << "Ingresa un numero: ";
	std::cin >> opc;
	
	if(opc > 0){
		std::cout << "el numero: " << opc << " es POSITIVO" << std::endl;
	}
	else if(opc < 0){
		std::cout << "el numero: " << opc << " es NEGATIVO" << std::endl;
	}
	else{
		std::cout << "el numero: " << opc << " es CERO" << std::endl;
	}
	
	//Salto de linea para marcar los ejercicios
	std::cout << std::endl;
	
	//Ejercicio 2: ver si una persona es mayor de edad
	int opc2;
	std::cout << "Ingresa tu edad: ";
	std::cin >> opc2;
	
	if(opc2 >= 18){
		std::cout << "Eres mayor de edad" << std::endl;
	}
	else if(opc2 >= 0 && opc2 < 18){
		std::cout << "Eres menor de edad" << std::endl;
	}
	else {
		std::cout << "No puedes tener edad negativa :/" << std::endl;
	}
	
	std::cout << "Ingresa Enter para terminar el programa";//Le decimos al usuario que para terminar el programa preciona una tecla
	getch();//pausamos el programa hasta que el user ingrese (ENTER)
	return 0;
}
