#include <iostream>
using namespace std;
//Hacer 5 ejercicios de cada tema utilizando funciones y procedimientos (Algoritmos básicos, condicionales, ciclos y vectores.) Utilizar un menú en consola.

/**
Función menú

	----<MENÚ>----
	1. Algoritmos básicos.
		1. Ej1
		2. Ej2
		3. Ej3
		4. Ej4
		5. Ej5
		
	2. Condicionales.
		1. Ej1
		2. Ej2
		3. Ej3
		4. Ej4
		5. Ej5
		
	3. Ciclos.
		1. Ej1
		2. Ej2
		3. Ej3
		4. Ej4
		5. Ej5
		
	4. Vectores
		1. Ej1
		2. Ej2
		3. Ej3
		4. Ej4
		5. Ej5
	
**/	

// -------------------------------------------------------
//Procedimientos MENÚ

void menu(){
	cout<<"----<MENU>----"<<endl;
	cout<<"1. Algoritmos básicos."<<endl;
	cout<<"2. Condicionales."<<endl;
	cout<<"3. Ciclos."<<endl;
	cout<<"4. Vectores"<<endl;
	cout<<"5. Salir"<<endl;
}

void menuAlgoritmosBasicos(){
	cout<<"----<MENU ALGORITMOS BASICOS>----"<<endl;
	cout<<"1. Cuadrado de un numero."<<endl;
	cout<<"2. Suma de dos numeros."<<endl;
	cout<<"3. Calcular hipotenusa."<<endl;
	cout<<"4. Promedio de un estudiante."<<endl;
	cout<<"5. Expresar en horas, minutos y segundos un tiempo dado en segundos."<<endl;
	cout<<"6. Salir"<<endl;
}

void elegirOpcion(){
				short opcionAlgBasicos;
				bool salirAlgBasicos = true;
				do{
					menuAlgoritmosBasicos();
					cin>>opcionAlgBasicos;
					switch(opcionAlgBasicos){
						case 1:
							//función ejercicio 1
							break;
						case 2:
							//función ejercicio 2
							break;
						case 3:
							//función ejercicio 3
							break;
						case 4:
							//función ejercicio 4
							break;
						case 5:
							//función ejercicio 5
							break;
						case 6:
							salirAlgBasicos = false;
							break;
					}
				}
				while(salirAlgBasicos);
}

// -----------------------------------------------





//--------1. Algoritmos básicos----------//	
	
//Ejercicio 1 ()

//Ejercicio 2 ()

//Ejercicio 3 ()

//Ejercicio 4 ()

//Ejercicio 5 ()


//--------2. Condicionales----------//	



int main(){
	short opcion;
	bool salir = true;
	do{
		menu();
		cin>>opcion;
		switch(opcion){
			case 1:
				elegirOpcion();
				break;
				
			case 2:
				//menuEjercicios();
				break;
			case 3:
				//menuEjercicios();
				break;
			case 4:
				//menuEjercicios();
				break;
			case 5:
				salir = false;
				break;
				
		}
	}
	while(salir);	
}
