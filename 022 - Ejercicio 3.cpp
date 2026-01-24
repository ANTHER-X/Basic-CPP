/*
Vamos a crear un sistema de Calificaciones

1; Ingresa usuario.
2; Mostrar calificaciones.
3; mostrar aprobados.
4; mostrar reprobados.
5; mostrar promedio.

Vamos a ver como limpiar la consola, dado que C++ es multiplataforma, no existe algo como Console.Clear();
por lo que debemos usar los comandos de cada SO
Windows -> system("cls");
Mac/Linuc -> system("clear");

Vamos a ver el manejo de exepciones, como vimos antes, si no metes el dato que corresponde, C++ te tira un error.
Esto se puede evitar manejando manualmente a cin

if(cin.fail())//si falla
{
	cin.clear();//limpia entrada
	cin.ignore(1000,'\n')//restaura entrada
}

*/


#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <cmath>

//nos servira para limpiar entradas no validas
bool error(){
	if(std::cin.fail())//si falla
	{
		std::cin.clear();//limpia entrada
		std::cin.ignore(1000,'\n');//restaura entrada
		return true;
	}
	
	return false;
}

/*
Funcion para insertar una nueva calificacion, metemos los vectores, y para que los datos se mentengan en los originales, hacemos algo que se llama
referencia, que basicamente es que cualquier cambio pasado a una funcion/Metodo, se reflejara en el original o el que fue metido como parametro,
esto va despues del tipo de dato y antes del nombre de la variable, y es con el simbolo '&'
*/
void AddUser(std::vector<std::string> &Nombres, std::vector<double> &Calf){
	
	//agregamos el nombre
	std::string nombre;
	std::cout << "ingresa el nombre: ";
	std::cin >> nombre;
	Nombres.push_back(nombre);
	
	//agregamos la calificacion
	double Cal;
	std::cout << "ingresa la calificacion: ";
	std::cin >> Cal;
	if(error() == true) Cal = 0.0;
	
	//vemos que no se salga de los parametros especificados
	if(Cal < 0.0) Cal = 0.0;
	if(Cal > 10.0) Cal = 10.0;
	
	//agregamos la calificacion
	Calf.push_back(Cal);
	
}

//en este caso necesitamos las listas para poder mostrar, sin referencia ya que no se modificaran
void MostrarUsers(std::vector<std::string> Nombres, std::vector<double> Calf){
	std::cout << "Calificaciones." << std::endl;
	//como nombres y Calf tienen la misma extencion, cualquiera de los dos sirve como param maximo del for
	for(int i=0; i<Nombres.size(); i++){
		std::cout << Nombres[i] << " Tiene una calificacion de: " << Calf[i] << std::endl;
	}
	getch();
}

/*
esta funcion nos creara una lista auxiliar con los que si aprobaron o con lo que no, dependiendo el bool insertado, a las listas
originales no las cambiamos, por lo que no las pasamos por referencia, a las copias si
*/
void FiltraUsers(std::vector<std::string> NOriginal, std::vector<double> CalfOriginal,
				std::vector<std::string> &NCopia, std::vector<double> &CalfCopia,
				bool Rep = false){
	//con el metodo clear(), limpiamos todo lo que tiene la lista
	NCopia.clear();
	CalfCopia.clear();
	
	std::cout << NOriginal.size() << std::endl;
	std::cout << CalfOriginal.size() << std::endl;
	
	//bucle que recorre y filtra las 2 listas originales
	for(int i=0; i<CalfOriginal.size(); i++){
		
		if(Rep == true && CalfOriginal[i] < 6){//si quieres los reprobados
			//agregamos valor al auxilar del nombre en el nombre y calif asignados
			NCopia.push_back( NOriginal[i] );
			CalfCopia.push_back( CalfOriginal[i] );
			
		}else if(Rep == false && CalfOriginal[i] > 6){
			//hacemos lo mismo pero en este caso estarian los que si aprobaron
			NCopia.push_back( NOriginal[i] );
			CalfCopia.push_back( CalfOriginal[i] );
		}
		
	}
	
}

/*Para el promedio solo necesitamos las calificaciones, este nuevo tipo de dato es, como vez,
un double pero mas grande, con mas capacidad pero mas pesado en memoria*/
long double Promedio(std::vector<double> Calf){
	//auxiliar
	long double aux = 0.00;
	
	//foreach que recorre la lista
	for(double C : Calf){
		aux += C;//sumamos y agregamos el valor actual
	}
	
	//sacamos promedio
	aux = (aux/Calf.size());
	
	//damos el valor a la funcion
	return aux;
}

int main(){
	
	//creamos nuestra lista dinamica de nombres (vector) de tipo cadena de texto (string)
	std::vector< std::string > Nombres;
	std::vector< std::string > NombresFiltrados; //lista donde mostraremos los que, o no aprobaron
	
	//creamos igual, la lista de calificaiones
	std::vector<double> Calif;
	std::vector<double> CalifFiltrados;//mismo caso
	
	//es como un int pero mas pequenio en espacio y capacidad
	short opc;
	
	//el bucle se ejecuta siempre, hasta que decida salir
	do{
		/*antes de todo, limpiamos la pantalla, anque no haya nada lo hacemos ya que como estamos en un bucle, esto se volvera a repetir y si lo ponemos al final,
		cuando se termine el programa se borrara lo mostrado y llegara al getch final sin nada en pantalla*/
		system("cls");
		
		//Podemos saltarnos la integracion de endl con un comando de texto (\n) que significa salto de linea
		std::cout << "Gestor de calificaciones\nAdd Alumno (1).\nMuestra Calificaciones (2).\nMostrar Aprobados (3).\nMostrar reprobados (4).\nMostrar Promedio (5).\nSalir (6).\nOPC: ";
		std::cin >> opc;
		
		//si pasa el error de datos, damos nuevo dato
		if(error() == true) opc = -1;
		
		//limpiamos antes de mostrar lo que sea que seleccione
		system("cls");
		
		//switch para manejar las opciones
		switch(opc){
			case 1://agregamos calf
				AddUser(Nombres,Calif);
				break;
				
			case 2://mostramos calificaciones
				MostrarUsers(Nombres,Calif);
				break;
				
			case 3://filtrar y mostrar aprobados
				//en este punto las listas de filtracion ya estan acomodadas y con datos
				FiltraUsers(Nombres,Calif,NombresFiltrados,CalifFiltrados);
				
				//este texto se concatenara con el de Calificaciones en la misma fila
				std::cout << "APROBADOS - ";
				MostrarUsers(NombresFiltrados,CalifFiltrados);
				
				break;
				
			case 4://filtrar y mostrar reprobados
				FiltraUsers(Nombres,Calif,NombresFiltrados,CalifFiltrados, true);
				
				std::cout << "REPROBADOS - ";
				MostrarUsers(NombresFiltrados,CalifFiltrados);
				
				break;
				
			case 5://mostrar promedio
				std::cout << "Promedio: " << Promedio(Calif);
				getch();
				break;
				
			case 6://salinmos
				std::cout << "Adios..." << std::endl;
				break;
			//en este caso no usaremos default
		}
		
		
	}while(opc != 6);//nos mantenemos en el bucle siempre que no eliga la opcion de salir
	
	
	std::cout << "Programa finalizado, ingresa Enter para continuar...";
	getch();
	return 0;
}
