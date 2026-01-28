/*
 * Proyecto: Basic C++
 * Autor: ANTHER-X
 * GitHub: https://github.com/ANTHER-X
 * Licencia: MIT
 */

//Operadores logicos, Comparadores y condicional if-else if-else

/*Los condicionales se usan para poder validar datos, y ejecutar una u otra cosa
mientras que los operadores logicos nos ayudan a tomar datos, filtrar etc...
Veremos el condicional mas simple que es el if, como se usa y para que sirve*/

#include <iostream>


int main(int argc, char** argv){
	
	//los condicionales y operadores logicos necesitan siempre al menos 2 datos a validar/comparar
	int a = 1, b = 2;
	
	/*
		Los if en C++ permiten tomar decisiones basadas en condiciones l�gicas.
		
		La forma general es:
		if (condici�n) {
		    // C�digo a ejecutar si la condici�n es verdadera (true)
		}
		
		-------------------------
		Operadores de comparaci�n
		-------------------------
		==   igual a            (ej: a == b -> true si a es igual a b)
		!=   distinto de        (ej: a != b -> true si a no es igual a b)
		>    mayor que          (ej: a > b -> true si a es mayor que b)
		<    menor que          (ej: a < b -> true si a es menor que b)
		>=   mayor o igual que  (ej: a >= b -> true si a es mayor o igual a b)
		<=   menor o igual que  (ej: a <= b -> true si a es menor o igual a b)
		
		-------------------------
		Operadores l�gicos
		-------------------------
		&&   (AND)   -> todas las condiciones deben ser verdaderas
		||   (OR)    -> basta con que al menos una condici�n sea verdadera
		
		-------------------------
		Ejemplos
		-------------------------
		if ( (5 > 3) && (10 == 10) ) {
		    //Ambas condiciones son true, por lo tanto este bloque se ejecuta
		}
		
		if ( (5 > 10) || (2 < 3) ) {
		    //La primera es false, pero la segunda es true -> se ejecuta
		}
		
		if ( (4 == 4) && (2 > 3) ) {
		    //La primera es true, la segunda es false -> no se ejecuta
		}
	*/

	
	//en este caso a = 1 y b = 2, por lo que el mensaje sera el siguiente
	if(a <= b){
		std::cout << a << " es menor que " << b << std::endl;
	}
	
	//en caso de que no, simplemente lo ignorara
	a = 4;
	
	//ignora esto
	if(a <= b){
		std::cout << a << " de nuevo es menor que " << b << std::endl;
	}
	
	
	/*pero existen diversas variantes del if*/
	if(a < b){//condicion simple 
		std::cout << a << " es menor que " << b << std::endl;
	}
	else if( a > b){//si la primer condicion no se cumple, impon la siguiente, si la primera se comple, ignora esta
		std::cout << a << " es mayor que " << b << std::endl;
	}
	else{//si ninguna de las condiciones se cumplio, haz lo siguiente sin importar que
		std::cout << a << " es igual que " << b << std::endl;
	}
	
	//ahora veremos con los operadores logicos
	a = 3;
	b = 2;
	int c = 7, d = 4;
	
	if( a > b && d < c){//como ambas condiciones son true, se ejecutara el codigo
		std::cout << "El numero: " << a << " es mayor que " << b << " y el numero: " << d << " es menor que " << c << std::endl;
	}
	
	if( a > b && d == c){//aqui, la segunda condicion es false, por lo que no se ejecuta si usamos AND logico (&&)
		std::cout << "El numero: " << a << " es mayor que " << b << " y el numero: " << d << " es igual que " << c << std::endl;
	}
	
	if( a == b || c > d){// en este caso, si se ejecurta aunque (a == b) sea false ya que usamos el OR logico (||)
		std::cout << "El numero: " << a << " es igual que " << b << " O el numero: " << c << " es Mayor que " << d << std::endl;
	}
	
	return 0;
}
