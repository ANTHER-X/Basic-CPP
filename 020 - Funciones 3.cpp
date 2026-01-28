/*
 * Proyecto: Basic C++
 * Autor: ANTHER-X
 * GitHub: https://github.com/ANTHER-X
 * Licencia: MIT
 */

/*Funciones 3*/

/*ahora vamos a ver como compactar funciones y codigo y haremos un par de ejemplos.
No si lo dije pero las variables si las crear dentro de un metodo, solo existen en ese metodo,
no pueden exportarse (a menos que quieras retornar el valor o que hagas algo que se llama referancia
de variables), este tipo de variables internas que existen solo en funciones se llaman variables o datos
locales, ya que no pueden usarse desde otra parte del codigo.
Sin embargo, si creas una variable fuera de cualquier funcion o lo que sea, al mismo novel que los includes,
podras usarla donde quieras, a eso se le llaman datos o variables globales*/

#include <iostream>
#include <conio.h>

#define _USE_MATH_DEFINES
#include <cmath>
#include <corecrt_math_defines.h>

//Funcion que saca el area de un cuadrado
int AreaCuadrado(int Num, int Denom){
	
	/*si nuestas funciones son pequenias, podemos retornar en si la operacion, ya que pow nos da un valor
	y debemos retornar un valor*/
	return pow(Num,Denom);
}

//Tambien podemos hacer algo asi
double AreaCirculo(int Diametro);//lo que se hace es declarar una funcion, mas abajo la iniciamos

/*Ahora no tomaremos un valor, sino que la funcion hara todo dentro de si, pedir datos, hacer operaciones
y mostrar resultados*/
void Area_cono();

int main(int argc, char** argv){
	
	int num;
	
	std::cout << "Ingresa el Tam de un lado del cuadrado: ";
	std::cin >> num;
	
	//como al final AreaCuadrado es un numero, podemos imprimirlo
	std::cout << "El area del cuadrado es de: " << AreaCuadrado(num,2) << " cm^2" << std::endl;
	
	std::cout << "Ingresa el dimetro del circulo: ";
	std::cin >> num; //reutilizamos y damos nuevo valor
	
	
	std::cout << "El area del circulo es de: " << AreaCirculo(num) << " cm^2" << std::endl;
	
	Area_cono();
	
	getch();
	return 0;
}

double AreaCirculo(int Diametro){
	//como hacemos una sola operacion podemos retornarla
	return (M_PI * pow( (Diametro/2), 2));
}

void Area_cono(){
	double rad, alt, G, area;
	
	std::cout<<"ingresa el diametro: ";
	std::cin>>rad;
	std::cout<<"ingresa la altura: ";
	std::cin>>alt;
	rad = rad/2;
	
	G = sqrt((pow(rad,2) + pow(alt,2)));
	
	
	std::cout<<"El area es: " << (M_PI * rad * G ) + ( M_PI * pow(rad,2)) <<" cm2" <<std::endl;
	std::cout<<"El Volumen es: " << ((M_PI * pow(rad,2)) * alt) /3 << " cm3"<<std::endl;
}
