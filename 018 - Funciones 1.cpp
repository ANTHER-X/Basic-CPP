/*Funciones 1*/

#include <iostream>
#include <conio.h>

/*
Las funciones son partes de codigo las cuales puedes llamar desde cualquier parte, estas al estar encapsuladas,
solo ejecutan el codigo que tiene dentro, ademas de eso, al crear una funcion, podras llamarla cuantas veces quieras
por lo que estas reutilizando codigo, es decir, en vez de escribir 2 veces lo mismo en distintas partes de codigo,
solo llamas a la funcion y ya no tendras que escribir todo cada vez.
Ademas de eso, las funciones son en si un tipo de dato, solo que hacen algo, algo asi como una funcion matematica la
cual te da un valor final.
Las funciones constan de 4 partes:
(tipo de dato) (nombre) (entre "()" parametros que necesita par aejecutar su codigo, puede estar vacio)
(entre "{}" el codigo que ejecuta).
Como ya vimos, main es en si una funcion, pero exactamente que hace
*/

/*int es el tipo de dato, o se main al final debe tener un valor numerico entero, luego el nombre "main", segido de
parentesis loss cuales son los parametros, (nos lo da windows, o mas bien, la consola en la que se ejecuta).
Las llaves con el codigo dentro y al final, la exprecion return, le da valor a main cuando termina de ejecutar
su codigo.
No esta de mas decir que siempre debes retornar un valor, ya que si no habria errores, ya que la funcion no tendria
valor alguno (o sea tendria un valor indeterminado), por lo que debes diseniar las funciones teniendo en cuenta que haga lo que
haga, al final debe tener un valor

int main(int argc, char** argv){
	
	
	getch();
	return 0;
}
*/

/*OK, dije que las funciones deben tener siempre un valor... Excepto si es de un tipo especial que no tiene valor,
ese es el tipo de dato void, los void, tienen memoria reservada, pero no tienen valor alguno, no son ni int, car, string u otros,
simplemente no tienen valor, pero si ocupan espacio, y diras, para que quiero eso, y bueno, esto es comunmente usado en funciones
que no necesitas que te den un valor, por ejemplo, al imprimir un texto en pantalla no necesitas recivir datos, asi que usas
a void para hacer solo eso.
Vamos a hacer una funcion que haga eso, imprimir "Hola Mundo" y nada mas, sin retorno de datos*/

//tipo  nombre parametros
void 	Saluda (/*sin parametros*/){
	//codigo que ejecuta
	std::cout << "Hola mundo :)" << std::endl;
}

/*ahora bien para llamar a una funcion solo pones el nombre de esta, segido por parentecis y sus parametros*/
int main(int argc, char** argv){
	
	Saluda();//como es de tipo void, no necesitamos guardarlo en una variable, y como no tiene parametros dejamos los parentecis vacios
		
	getch();
	return 0;
}



