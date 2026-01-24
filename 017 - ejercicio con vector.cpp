/*Ejercicio basico con los vectores*/

//Solo pide al User una cantidad de numeros a insertar, busca el numero mayor, el menor y ordena de menor a mayor el array

#include <iostream>
#include <conio.h>
#include <vector>

int main(int argc, char** argv){
	
	std::vector<int> lista;
	int cant, numInsert, min = 2147483647, max = -2147483648;
	
	std::cout << "Ingresa cuantos numeros insertaras: ";
	std::cin >> cant;
	
	//bucle que se reproduce la cantidad de veces que el user decidio, y se usara para insertar numeros al vector
	for(int i = 0; i<cant; i++){
		std::cout << "Ingresa el numero " << i << ": ";
		std::cin >> numInsert;//ingresa el numero
		lista.push_back(numInsert);//agregalo al vector
	}
	
	//bucle para organizar de menor a mayor, este bucle tiene una eficiencia de (O^2)
	for(int i=0; i<lista.size(); i++){
		
		//segundo bucle
		for(int j=0; j<lista.size(); j++){
			
			//si el elemento posterior es menor al actual y no son el mismo elemento
			if(lista[j] > lista[i] && i != j){
				int temp = lista[i];//guardamos el valor del actual
				lista[i] = lista[j];//intercambiamos valores
				lista[j] = temp; 	//intercambiamos valores
			}
		}
		
	}
	
	for(int i : lista){
		std::cout << i << std::endl;
	}
	
	/*Ahora bien, para hacer lo mismo de forma contraria tendriamos que hacer copy-paste y cambiar solo un operador logico,
	en los siguientes archivos veremos como solucionar eso, ya que entraremos en las funciones, las cuales nos permiten
	reutilizar codigo sin necesidad de volverlo a escribir, entre otras, cosas, tambien veremos combinaciones de operadores
	para operaciones complejas, parametros, retorno de valores, tipos de funciones entre otras cosas.
	De momento solo hare copy-paste y buscare el numero minimo y maximo*/
	
	//bucle para organizar de menor a mayor, este bucle tiene una eficiencia de (O^2)
	for(int i=0; i<lista.size(); i++){
		
		//segundo bucle
		for(int j=0; j<lista.size(); j++){
			
			//si el elemento posterior es menor al actual y no son el mismo elemento
			if(lista[j] < lista[i] && i != j){
				int temp = lista[i];//guardamos el valor del actual
				lista[i] = lista[j];//intercambiamos valores
				lista[j] = temp; 	//intercambiamos valores
			}
			
			//busca el maximo
			if(lista[j] > max){
				max = lista[j];
			}
			
			//busca el minimo
			if(lista[j] < min){
				min = lista[j];
			}
		}
		
	}
	
	for(int i : lista){
		std::cout << i << std::endl;
	}
	
	std::cout << "Ingresa Enter para finalizar el programa... ";
	getch();
	return 0;
}
