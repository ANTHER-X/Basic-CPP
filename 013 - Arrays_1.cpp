/*Arrays (Areglos)*/

/*Los arrays o arreglos son contenedores de variables los cuales se almacenan en forma de fila,
Esto nos puede ayudar bastante si es que tenemos varias variables y necesitamos algo en que contenerlas,
como calificaciones, nombres, listas de inventarios etc...

Los arrays funcionan de la siguiente forma
(tipo) (nombre)  ([cantidad a soportar]);

Se crean asi

int Arreglo[10];

E internamente funcionan asi.

Arreglo[10] -> ( num1, num2, num3, num4, num5, num6, num7, num8, num9, num10)
*/
#include <iostream>
#include <conio.h>

int main(int argc, char** argv){
	
	/*ahora vamos a crear un array, y veremos como darles valores.
	Cabe decir que en informatica los numeros comienzan en 0, no en 1*/
	int Arreglo[10];
	
	Arreglo[0] = 90; //si queremos dar algun valor al arreglo, ponemos el nombre de este, seguido con el valor que tendra
	
	/*Aunque esto es lento, ya que tendrias que darle valor uno por uno, o con un bucle, lo que seria muy ineficiente.
	Para eso, hay una forma mas compacta de asignar un valor.
	Es, darle valor con '=', pero en ves de dar un numero, abrimos unas llaves y ponemos todos los valores,
	cabe decir que deben estar ordenados, el primer numero insertado sera el primer numero que contendra el array*/
	int Arreglo2[5] = {3,9,15,9,3};
	
	/*y si queremos recorrerlo, hariamos un for para recorrer el arreglo, pero el caso es que C++ no sabe de que
	tamanio es el arreglo, por lo que debemos sacarlo a mano*/
	
	/*la forma en la que sacamos la cantidad de elementos es, sacar el tamanio en bits del array y dividirlo
	entre cualquiera de los tamanios de uno de sus elementos*/
	size_t cantidad = sizeof(Arreglo2) / sizeof(Arreglo2[0]);
	
	for(int i=0; i<cantidad; i++){
		//si quieres sacar algun elemento de un array, tomamos el array y entre corchetes el numero del elemento a usar
		std::cout << "Numero " << i << " del array es: " << Arreglo2[i] <<std::endl;
	}
	
	std::cout << "Preciona Enter para finalizar el programa... ";
	getch();
	return 0;
}

