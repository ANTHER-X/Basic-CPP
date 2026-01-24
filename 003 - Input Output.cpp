//Input Output

#include <iostream>

int main(int argc, char** argv){
	
	/*ahora veremos como mostrar datos mediante terminal.
	En C++, para tener mas organizacion se suele separar las cosas por espacios,
	el espacio de las librerias estandar para C++ es (std/Standar).
	Para usar algo de las librerias estandar, aparte de incluir la libreria, tambien tienes
	que usar el espacio seguido por 2 doble punto, "(namespace)::".
	Para mostra los datos en consola se usa el comando de (cout/Character Output/Salida de caracterez),
	se sige con "<<" para decir que vas a imprimir lo que sigue, y al incluir cadenas de texto se usan
	las comillas dobles ("") y dentro el texto que quieras mostrar.
	Ahora que insertas el texto, si vuelves a usar (<<) diras que tambien debes meter el siguiente comando.
	En este caso es (endl/end line/fin de linea) que hace un salto de linea y pasa a la siguiente*/
	std::cout << "Hello World!" << std::endl;
	
	/*En el caso de obtener datos que el usuario mustre por medio de la terminal usamos otro comando
	llamado (cin/Character Input/Entrada de caracterez), pero para poder guardar los datos necesitas
	una variable, de cualquier tipo, pero hay varios inconvenientes, los cuales son.
	La entrada de datos es texto, por lo que si quieres guardar en un numero tendras que insertar
	solo numeros si no fallara el programa por error de formato de datos (o ignorara la toma de este)*/
	std::cout << "Ingresa solo numeros: ";
	int numero;
	std::cin >> numero;//ademas para tomar datos ahora se usara (>>)
	
	/*Para mostrar estos datos en pantalla, en vez de escribir el numero en texto (ya que no sabemos cual insertara),
	lo que hacemos es poner a la variable en vez del texto despues de (<<)*/
	std::cout << "El numero que ingresaste es: " << numero << std::endl;
	
	return 0;
}

