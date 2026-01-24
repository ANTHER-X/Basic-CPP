/*Funciones 2*/

/*ahora vamos a hace una funcion que nos sume 2 numeros y nos de el valor*/

#include <iostream>
#include <conio.h>


/*
Como nuestra funcion ahora nos retornara un valor, su tipo de dato ahora sera entero y ahora le vamos a meter 2 parametros para
sumar, a y b.
Los parametros se pasan como si crearas cualquier variable (tipo) (nombre) y si quieres mas de un parametro, los divides con una
coma ','
*/
int Suma(int a, int b){
	int c;	//creamos el resultado
	c = a+b;//le damos el valor
	
	/*hay que tener en cuenta que el tipo de dato retornado siempre debe
	ser el mismo tipo de dato que la funcion*/
	return c;//retornamos la suma
}

int main(int argc, char** argv){
	
	//creamos un entero que sera igual a Suma con los parametros 9,8
	int a = Suma(9,8);//aqui no debemos hacer variables y darles valor, ya que un numero en si es un dato entero
	
	//Vemos si la suma es verdad
	std::cout << a << std::endl;
	
	getch();
	return 0;
}

