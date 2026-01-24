//Variables primitivas

#include <iostream>

int main(int argc, char** argv){
	
	/*las variables primitivas en C++ y cualquier lenguaje, con variables comunes, simples y que siempre se usan
	son lo indispensable para que funcione todo de forma correcta, las variables primarias son las siguientes*/
	
	/*el primer tipo de valor primitivo son los numeros enteros (int), el operador (=) sirve para darle
	valor a alguna variable, objeto, struct etc...
	las variables de tipo int solo aceptan numeros sin fraccion, en una escala de ~-32000 - ~32000,
	suficiente para lo que haremos*/
	int numeroEntero = 1;
	
	/*Las variables de tipo (char/caracter) nos sirven para representar un caracter de la tabla ascci
	esta variable tiene un peso de 1 byte (8 bits), que nos representa 256 valores pocibles (0 - 255, los
	mismos de la tabla ascci basica), en este caso para dar valor de usan comillas simples para saber
	que es un caracter y no algun pedazo de codigo*/
	char caracter = 's';
	
	/*Las variables de tipo (float/flotante) tambien nos representan numeros, pero en este caso tambien
	permiten numeros con fraccion, con un maximo de 7 decimales y un peso de 4 bytes (32 bits)*/
	float numeroFlotante = 1.5;
	
	/*Los tipos (double/dobles) son lo mismo que float, pero double es mas preciso, acepta hasta
	15 decimales, con un peso de 8 bytes (64 bits)*/
	double numeroDoble = 1.689;
	
	/*un (bool/boleano) es eso, puede tener 2 estados, true or false, aunque solo tiene estos valores,
	no pesa 1 bit, si no 1 byte (8 bits), lo mismo que char pero con solo 2 estados*/
	bool boleano = false;
	
	return 0;
}
