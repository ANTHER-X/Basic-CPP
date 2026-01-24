/*Operadores aritmeticos*/

/*
-------------------------
Resumen
-------------------------
Los operadores aritmeticos sirven para poder realizar operaciones matematicas,
esto obiamente nos va a servir en un sin fin de cosas, empezaremos a ver cuales
son y ejemplos basicos de uso

+ -> suma (a + b)
- -> resta (a - b)
/ -> divicion (a / b), la divicion no se realiza con numeros 0
* -> multiplicacion (a * b)
% -> modulo (a * b), es el residuo de la divicion

Si a todas estas operaciones le seguimos con un '='
no solo se hara la operacion, sino que tambien se igualara
a la variable

ejmp 1:

5 + 3 = 8, pero 5, sigue siendo 5
5 += 3 = 5->8, si usamos el igual, ahora 5 vale 8 al final de la operacion

*/

#include <iostream>

int main(int argc, char** argv){
	
	//Ejemplo de uso
	int a = 5, b = 3;
	
	//se imprime en pantalla la suma de a+b, pero 'a' sigue siendo 5 y 'b' 3
	 std::cout << (a+b) << std::endl;//imprime 8
	
	//aqui se le suma b a 'a' y 'a' cambia su valor a 'a+b'
	a += b;
	std::cout << a << std::endl;//imprime 8
	
	//y si queremos hacer otras operaciones donde tenemos que consrevar el resultado
	a = 5;
	b = 4;
	int c = (a*b-a+2)//que es equivalente a (5*4-5+2 = 17)
	std::cout << c << std::endl;
	
	//ahora un ejemplo con el modulo
	a = 11;
	b = 3;
	c = a % b;//el modular de (11/3) seria 2
	
	std::cout << c << std::endl;
	
	
	return 0;
}
