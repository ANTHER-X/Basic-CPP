/*
 * Proyecto: Basic C++
 * Autor: ANTHER-X
 * GitHub: https://github.com/ANTHER-X
 * Licencia: MIT
 */

/*Arrays 2*/


/*Desde C++11, C++ incluyo una estructura especial para manejar los arrays de mejor forma*/
#include <array>

#include <iostream>
#include <conio.h>

int main(int argc, char** argv){
	
	/*Los arrays funcionan de la misma forma, sin embargo, al usar esta clase debemos tener unas consideraciones.
	Ahora, estamos usando una estructura, por lo que tenemos mas facilidad al momento de usar los arrays.
	Al crear un array, usando "<>", debemos especificarle 2 cosas, el tipo de dato que sera  y el tamanio que
	tendra, lo demas es de la misma forma*/
	std::array<int, 5> arreglo = {5,9,75,41,3};
	
	/*Ahora no debemos hacer operaciones para saber el tamanio del array, la estructura nos
	la da de forma automatica usando el metodo de (.size()), aunque este nos da LA CANTIDAD de elementos que hay
	en el arreglo.
	
	Por otra parte el ciclo foreach funciona como un ciclo for normal, pero este toma autoaticamente el
	tamanio del arreglo pasado y recorre este poniendo una variable que copia el dato*/
	for(int i : arreglo){
		std::cout << "El numero: " << i << " del array es: " << arreglo[i] << std::endl;
	}
	
	std::cout << "Preciona Enter para finalizar el programa... ";
	getch();
	return 0;
}
