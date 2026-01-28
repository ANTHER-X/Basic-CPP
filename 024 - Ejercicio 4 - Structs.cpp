/*
 * Proyecto: Basic C++
 * Autor: ANTHER-X
 * GitHub: https://github.com/ANTHER-X
 * Licencia: MIT
 */

#include <iostream>
#include <conio.h>
#include <string>

/*
OK, ahora que sabemos como funcionan los struct's vamos a crear un programa el cual haga lo siguiente
1; Pedir los datos de un Empleado (Nombre, Sueldo Mensual, Edad, Departamento)
2; Listarle varios departamentos y dar la opcion de cambiarse, cada departamento tendra su sueldo.
3; Dar la opcion de mostrar su sueldo semanal y anual.

## Deberas crear dos struct, una del empleado y otra del departamento
## No podras usar Vectores, seran Array's estaticos.
## Puedes usar las funciones que quieras

*/

//Estrcuturas
struct Empleado{
	std::string Nombre;
	std::string Departamento;
	double SueloMensual;
	short Edad;
};

struct Departamento{
	std::string Nombre;
	double SueldoMensual;
};

//Arreglo de Departamentos
Departamento departamentos[] = {
	{"Comida",5960},{"Programacion",19568},{"Quimica",17360},{"Salud",8350},
	{"Construccion",7450},{"Venta-Ropa",6710},{"Agricultura",4390},{"Comercio",12045},
	{"Mineria",9805},{"Oficinista",10453},{"Bancario",18044}
};


//tomamos una funcion que nos regrese el index del departamento elegido
int EligeDepartamento(){
	
	int opc;
	
	//mostramos una lista con las opciones
	std::cout << "Lista de Departamentos" << std::endl;
	
	for(int i=1; i<=10; i++){
		std::cout << "opc " << i << " " << departamentos[i].Nombre << std::endl;
	}
	
	//Le pedimos la opcion
	std::cout << "Eligue una opcion: ";
	std::cin >> opc;
	
	return opc;
}

//Damos la opcion de mostrar sueldos
void MuestraSueldo(Empleado E){
	
	std::cout << "Tu sueldo mensual es de: " << E.SueloMensual << std::endl;
	std::cout << "Tu sueldo Semanal es de: " << (E.SueloMensual/30)*7 << std::endl;
	std::cout << "Tu sueldo anual es de: " << E.SueloMensual*12 << std::endl;
	
}

//Damos la opcion de cambiar de departamento
void CambiarDepartamento(Empleado &E){
	
	//usamos la funcion que nos da el index del departamento
	int opc = EligeDepartamento();
	
	//elegimos
	if(opc > 0 && opc < 11){
		E.Departamento = departamentos[opc].Nombre;
		E.SueloMensual = departamentos[opc].SueldoMensual;
	}
	else{
		std::cout << "opcion incorrecta. Regresando..." << std::endl;
	}
	
}

//Pedimos los datos al empleado para rellenar
Empleado CrearEmp(){
	
	Empleado aux;
	
	std::cout << "Elige un departamento..." << std::endl;
	int opc = EligeDepartamento();
	
	if(opc > 0 && opc < 11){
		aux.Departamento = departamentos[opc].Nombre;
		aux.SueloMensual = departamentos[opc].SueldoMensual;
	}
	else{
		std::cout << "opcion incorrecta. Regresando..." << std::endl;
	}
	
	return aux;
}

int main(){
	
	//Creamos al empleado
	Empleado EMP = CrearEmp();
	
	int opc;
	
	do{
		std::cout << "Selecciona una opcion..." << std::endl;
		
		std::cout << "Opc 1: Cambiar Departamento" << std::endl;	
		std::cout << "Opc 2: Mostrar Salario" << std::endl;
		std::cout << "Opc 3: Salir" << std::endl;
		
		std::cout << "Elige: ";
		std::cin >> opc;
		
		switch(opc){
			
			case 1://cambiar departamento
				CambiarDepartamento(EMP);
				break;
				
			case 2://Listar Sueldos
				MuestraSueldo(EMP);
				break;
		}
		
	}while(opc != 3);
	
	return 0;
}
