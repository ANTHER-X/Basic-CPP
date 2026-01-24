/*Bucles*/

/*los bucles nos permiten reptetir partes de codigo.
Ahora veremos los 3 que existen, while, do-while y for*/

#include <iostream>
#include <conio.h>

int main(int argc, char** argv){
	
	/*
	------------
	Resumen
	------------
	El ciclo for es un buecle que se ejecuta cierta cantidad de veces, los parametros son
	
	------------
	Sintaxis
	------------
	for( (numero inicial) (condicion para mantener el bucle) (como aumentara el numero inicial)){
		codigo a ejecutar N cantidad de veces
	}
	*/
	/*
	------------
	Ejemplo de uso
	------------
	aqui creamos una variable i (iterador) como parametro inicial,
	luego, sepatando con ';' la condicion para mantener el bucle (que i sea menor a 5);
	despues como se comportara i, (se sumara 1 cada ciclo usando '++')*/
	for(int i=0; i < 5; i++){
		//ahora mostramos un mensaje, con el numero del ciclo que lleva, y saltamos linea
		//para ver el ciclo, mostramos al valor acutal de i, sumando 1 para que comienze en 1 y no en 0
		std::cout << "Mensaje: " << i+1 << " Dado" << std::endl;
	}
	
	/*
	------------
	Resumen
	------------
	El ciclo while es un bucle que se ejecuta siempre que una condicion sea complida
	
	------------
	Sintaxis
	------------
	
	while(Condicion){
	Codigo a ejecutar siempre que el bucle este vivo
	}
	
	------------
	Ejemplo
	------------
	*/
	int opc;
	std::cout << "ingresa el numero 1 para entrar al bucle: ";
	std::cin >> opc;
	
	while(opc == 1){
	std::cout << "ingresaste al bucle, si quieres salir, ingresa un numero distinto a 1: ";
	std::cin >> opc;
	}
	
	/*
	------------
	Resumen
	------------
	el do-while es lo mismo que while, pero este se ejecuta al menos una vez, por lo que pues si, es util
	
	------------
	Sintaxis
	------------
	while{
		Codigo a ejecutar
	}do(Condicion)
	
	------------
	Ejemplo
	------------
	*/
	
	int opc2;
	do{
		std::cout << "Estas en el Ciclo do While, inserta 1 para salir: ";
		std::cin >> opc2;
	}while(opc2 != 1);
	
	getch();
	return 0;
}
