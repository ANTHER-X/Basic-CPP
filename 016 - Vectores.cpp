/*
 * Proyecto: Basic C++
 * Autor: ANTHER-X
 * GitHub: https://github.com/ANTHER-X
 * Licencia: MIT
 */

/*
Vectores.
Los vectores son arrays, pero no cualquier array, si no arrays dinamicos, es decir, ahora puedes tener cuantos
elementos quieras o de forma que no se sepa, basicamente ahora puedes eliminar y crear elementos de forma dinamica en
momento de ejecucion y esto tiene una enorme ventaja.
Ahora bien, al igual que array, vector no es un tipo de dato primitivo, sino una clase, y... lo se, aun no sabemos que
son clases, pero las usamos?, mas adelante veremos que son las clases pero de momento solo las usaremos
*/

#include <iostream>
#include <conio.h>

//libreria del vector
#include <vector>

int main(int argc, char** argv){
	
	//asi creamos un vector, entre "<>" va el tipo de valor que tendra tu vector
	std::vector<int> arrayDinamico = {1,2,5,45,8,9};//lo iniciamos con datos, pero podemos eliminar o anidar mas
	
	//para anidar usamos .push_back(param)
	arrayDinamico.push_back(5);
	arrayDinamico.push_back(15);
	arrayDinamico.push_back(24);
	arrayDinamico.push_back(525);

	//para accedeer usamos lo mismo
	std::cout << arrayDinamico[0] << std::endl;
	std::cout << arrayDinamico.at(1) << std::endl;//esto es mas seguro ya que lanza excepcion si no existe.

	std::cout << "Elementos: " << arrayDinamico.size() << std::endl;     // cantidad de elementos
	std::cout << "Capacidad: " << arrayDinamico.capacity() << std::endl; // capacidad reservada en memoria
	std::cout << "Vacio? " << arrayDinamico.empty() << std::endl;        // true si est� vac�o, false si no

	//recorrer vector
	
	//for normal
	for(int i=0; i<arrayDinamico.size(); i++){
		std::cout << "Numero " << i << ": " << arrayDinamico[i] << std::endl;
	}
	
	//foreach
	for(int i: arrayDinamico){
		std::cout << "Numero: " << i  << std::endl;
	}
	
	// Insertar en posici�n espec�fica
	arrayDinamico.insert(arrayDinamico.begin() + 2, 25);  //inserta 25 en elemento 2, quedaria [1,2,25,5]
	
	// Eliminar en posici�n espec�fica
	arrayDinamico.erase(arrayDinamico.begin() + 1);       //elimina el segundo elemento, queda [1,25,5]
	
	// Eliminar el �ltimo
	arrayDinamico.pop_back();						//elimina 525, quedaria [....15,24]
	
	// Eliminar todo
	arrayDinamico.clear(); 							//queda empty, por lo que al hacer (arrayDinamico.empty()) te da true
	
	std::cout << "Vacio? " << arrayDinamico.empty() << std::endl; //asi que te daria true
	
	std::cout << "Ingresa Enter para finalizar el programa... ";
	getch();
	return 0;
}
