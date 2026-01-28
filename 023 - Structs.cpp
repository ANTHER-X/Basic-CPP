#include <iostream>
#include <conio.h>

/*
En C++ para poder tener todo de una manera mucho mas organizada usamos varios metodos.
Una de las formas mas sencillas pero utiles de poder organizar las cosas es tener alguna variable
especial que nos de acceso a varios datos usando una misma variable, a esto en Programacion se le
conoce como objeto, un tipo de dato especial el cual nos permite acceder a varios datos desde el mismo,
eso y hacer otras cosas que veremos mas adelante.

En C++ las struct's son una palabra reservada que nos permite crear tipos de datos especiales con
la capacidad de tener varios tipos de datos dentro de si, la sintaxis declarativa es la siguiente:

struct "Nomb. Var. Especial"
{ Dentro de las llaves van los tipos de datos y su nombre, pero no les damos valor, ejmplo

    int Dato1;
    char Dato2;

}; Al final ";".

Para poder crear un objeto de este tipo es como el declarar una variable comun y corriente, pero
en el tipo de dato le tendras que decir que tu dato sera del tipo que creaste.

Para mejor vision veremos un ejemplo:
*/

struct Persona{ //Tenemos un tipo de dato especial llamado persona

    //con sus datos de edad y nombre
    int Edad;
    std::string Nombre;

};

int main(){

    //Para crear un objeto de tipo "Persona", solo damos el nombre de nuestro tipo de dato
    Persona P1;//y le damos nombre

    /*Para poder darle valor a sus componentes internos, los cuales conocemos como "atributos",
    debemos acceder a ellos atraves del nombre del objeto seguido por un punto y luego el nombre
    de su atributo*/

    P1.Edad = 20; //despues tratamos al atributo como una variable normal
    P1.Nombre = "Pedro";

    //Al igual, para aceder a estos atributos hacemos lo mismo.
    std::cout << "El nombre de la persona es: " << P1.Nombre << ". Su edad es de: " << P1.Edad << ". Years" << std::endl;

    std::cout << "Programa finalizado. Preciona ENTER para salir... ";
    getch();
    return 0;
}
