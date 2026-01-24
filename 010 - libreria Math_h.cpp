//Libreria Math.h

/*La libreria Math.h es una libreria dedicada a operaciones matematicas,
incluye muchas funciones, constantes y ayudas para poder crear de la mejor
forma pocible alguna operacion matematica.
Como no nos vamos a parar a ver todo, solo veremos lo basico, escencial y mas usado
de esta libreria*/

#include <iostream>

#include <conio.h>


/*IMPORTANTE: si te da algun error en las constantes, es por el compilador de C++, como creo que se usara dev-cpp,
este IDE no esta actualizado, es bastante antiguo y soporta apenas hasta C++ 11, por lo que tienes que definir las
definiciones de las constantes de la biblioteca, esto con IDEs mas modernos no pasa, o si estuvieramos usando C++ 20,
usariamos la biblioteca de (numbers), pero es desde C++ 20, estamos en C++ 11, asi que hacemos esto*/
#define _USE_MATH_DEFINES
#include <math.h>//libreria matematica

int main(int argc, char** argv){
	
	//Te incluye varias constantes (datos que no cambian) como PI y E
	std::cout << "PI = " << M_PI << std::endl;
    std::cout << "e = " << M_E << std::endl << std::endl;
    
    //Tambien te incluye funciones para operaciones como logaritmos
    std::cout << "log(e) = " << log(M_E) << std::endl;
    std::cout << "log10(100) = " << log10(100) << std::endl << std::endl;
    
    //Tambien te incluye potencias y Raizes como
    std::cout << "pow(9, 2)  = " << pow(9, 2) << std::endl; //potencias
    std::cout << "sqrt(9)    = " << sqrt(9) << std::endl; //raiz cuadrada
    std::cout << "cbrt(27)   = " << cbrt(27) << std::endl; //Raiz cubica
    std::cout << "hypot(3,4) = " << hypot(3, 4) << std::endl << std::endl; //Raiz cuadrada de (X^2 + Y^2), que es util para, por ejemplo distancias
    
    //Y funciones de Redondeo
    std::cout << "ceil(3.2)   = " << ceil(3.2) << std::endl; //redondear hacia arriba
    std::cout << "floor(3.8)  = " << floor(3.8) << std::endl; //redondear hacia abajo
    std::cout << "round(3.5)  = " << round(3.5) << std::endl; //redondea al entero mas cercano
    std::cout << "trunc(3.9)  = " << trunc(3.9) << std::endl << std::endl; //elimina decimales
    
    //Y finalmente, funciones trigonometricas como las siguientes
    std::cout << "sin(PI/2) = " << sin(M_PI/2) << std::endl; //seno (En radiantes)
    std::cout << "cos(0)    = " << cos(0) << std::endl; //Coseno
    std::cout << "tan(PI/4) = " << tan(M_PI/4) << std::endl << std::endl; //tangente
    
    std::cout << "Ingresa Enter para salir... ";
	getch();
	return 0;
}
