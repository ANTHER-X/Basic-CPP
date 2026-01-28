/*swtch-case con break y default*/

#include <iostream>
#include <conio.h>

int main(int argc, char** argv){
	
	/*
	------------
	Resumen
	------------
	switch, es como un tipo de condicional, pero no evalua en si condiciones sino cambios
	en C++, switch se usa comunmente con numeros, capturando sus cambios,
	la sintaxis es la siguiente
	
	------------
	Sintaxis
	------------
	switch(numero o variable a evaluar){
		casos de validacion, no codigo suelto como en if
	}
	
	------------
	Cases y Brake
	------------
	un Case es un como una condicion que se debe complir para que se ejecute cierto codigo, pero en si es un valor,
	que valor debe tener la variable para que se ejecute el codigo,
	brake, es como un cortador de codigo que evita que el resto del switch se ejecute, este se usa siempre al final de un case, para
	evitar pasar a otro o evaluar lo que siguen
	
	case 1://si la variable tiene el valor '1'
		//ejecuta lo que hay aqui
		break;//rompe el switch y sal de el
	
	------------
	Default
	------------
	default, es lo que se ejecuta si ningun caso se cumple, es como "else" de un if
	
	default://si ningun caso se ejecuta
	//ejecuta esto
		
		break;//rompe el ciclo y sal del switch
	*/
	
	//EJEMPLO SIMPLE
	int opc;
	std::cout << "Ingresa un numero del 1-4: ";
	std::cin >> opc;
	
	std::cout << "Eleguiste la opcion: " << opc << std::endl;
	
	switch(opc){
		
		case 1:
			std::cout << "Hola, como estas :)" << std::endl;
			break;
		case 2:
			std::cout << "Estas aprendiendo a programar" << std::endl;
			break;
		case 3:
			std::cout << "Pronto nos moveremos a Arduino" << std::endl;
			break;
		case 4:
			std::cout << "Ya casi puedes programar tu robot" << std::endl;
			break;
		
		default:
			std::cout << "No es una opcion valida en el switch" << std::endl << "Me despido, adios" << std::endl;
			break;
		
	}
	
	
	std::cout << "Ingresa Enter para terminar el programa";
	getch();
	return 0;
}
