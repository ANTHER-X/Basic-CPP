/*Funciones 4*/

/*
Ahora veremos funciones con parametros opcionales
*/

#include <iostream>
#include <conio.h>

/*
en esta ocacion hacemos una mini-funcion la cual me suma 3 numeros, pero pueden ver que uno
de los parametros ya tiene valor, a eso se le llama parametro opcional, como ya tiene un valor
puedes o no agregarlo al llamar a la funcion, ademas de eso los parametros opcionales
siempre deben ir a la derecha, despues de todos los parametros obligatorios
*/
int SumaNumeros(int a, int b, int c = 10){
	return (a+b+c);
}

/*Ahora vamos a hacer una funcion la cual me pueda dibujar una linea y que tenga varios parametros opcionales*/
void DibujaLinea(int Long, char form = '*', bool vertical = false){
	
	//bucle que recorre la longitud insertada
	for(int i=0; i<Long; i++){
		std::cout << form;//inserta la forma
		if(vertical == true) std::cout << std::endl;//si dice que la quiere vertical, anidas un salto de linea
	}
	
}

int main(int argc, char** argv){
	
	std::cout << "La suma es: " << SumaNumeros(20,5) << std::endl; //me dara el valor de 24 ya que 'c' vale 35 
	
	std::cout << "La suma es: " << SumaNumeros(20,5,15) << std::endl; //ahora me dara el valor de 40 ya que ahora le asigne el valor de 15 a 'c'
	
	int longitud;
	char opc;
	
	std::cout << "Ingresa la longitud que tendra la linea: ";
	std::cin >> longitud;
	
	std::cout << "Quieres que sea vertical (S/N): ";
	std::cin >> opc;
	
	//la funcion "toupper" convierte los caracteres a su vercion en mayuscula, "tolower" hace lo mismo pero a minuscula
	opc = toupper(opc);
	
	bool VH;
	if(opc == 'S') VH = true;
	else VH = false;
	
	std::cout << "Quieres cambiar la forma (S/N): ";
	std::cin >> opc; //retutilizamos variables
	opc = toupper(opc);
	
	if(opc == 'S'){
		
		char form;
		
		std::cout << "Inserta el caracter a mostrar: ";
		std::cin >> form;
		DibujaLinea(longitud,form,VH);
	}
	//como el boleado va despues del caracter mostrado, primero debes darle el nuevo valor al que va primero
	else DibujaLinea(longitud, '*', VH);
	
	getch();
	return 0;
}
