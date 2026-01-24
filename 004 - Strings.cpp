//Strings

/*las variables de tipo (string/cadena de texto), son eso, una cadena de caracterez que me representan datos
pero no podemos usar los string de forma normal, ya que hay que incluir su libreria.*/
#include <string>

#include <iostream>

int main(int argc, char** argv){
	
	/*Para hacer una variable string ya es distinto que una variable normal, ya que un string
	no es una variable en si sino un objeto (los veremos mas adelante) y este ya no es un dato primitivo
	por lo que debemos usar el nombre de espacio de std para crearlo*/
	std::string cadenaTexto = "Cadena de texto";
	
	/*si quieres mostrar su contenido, es lo mismo que cualquier variable*/
	std::cout << cadenaTexto << std::endl;
	
	//ademas, dentro de si, los string tienen muchas cosas interesantes
	
	//cadenaTexto.size();//Obtenemos el tamanio de la cadena
	cadenaTexto.erase(cadenaTexto.begin()+6);//eliminamos del caracter 0 al 6
	//cadenaTexto.begin();//nos representa el iterador constante de inicio de la cadena
	//cadenaTexto.end();//iterador constante del final de lacadena
	
	/*agrega texto al string (el primer valor es el idice donde se comenzara a agregar el contenido, en
	nuestro caso en el indice 2*/
	cadenaTexto.insert(3, "Texto intermedio ");
	
	/*Agregamos texto al final de la cadena*/
	cadenaTexto.append("Mas texto agregado");
	
	//mostramos todo lo hecho
	std::cout << cadenaTexto << std::endl;

	return 0;
}

