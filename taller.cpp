#include <iostream>
using namespace std;
//Hacer 5 ejercicios de cada tema utilizando funciones y procedimientos (Algoritmos básicos, condicionales, ciclos y vectores.) Utilizar un menú en consola.

// =================INICIO MENÚS==================


// Menú principal

void menu(){
	cout<<"----<MENU>----"<<endl;
	cout<<"1. Algoritmos basicos."<<endl;
	cout<<"2. Condicionales."<<endl;
	cout<<"3. Ciclos."<<endl;
	cout<<"4. Vectores"<<endl;
	cout<<"5. Salir"<<endl;
}

// 1. Submenú de algoritmos básicos

void menuAlgoritmosBasicos(){
	cout<<"----<MENU ALGORITMOS BASICOS>----"<<endl;
	cout<<"1. Cuadrado de un numero."<<endl;
	cout<<"2. Suma de dos numeros."<<endl;
	cout<<"3. Calcular hipotenusa."<<endl;
	cout<<"4. Promedio de un estudiante."<<endl;
	cout<<"5. Expresar en horas, minutos y segundos un tiempo dado en segundos."<<endl;
	cout<<"6. Salir"<<endl;
}

// 2. Submenú de condicionales





// 3. Submenú de ciclos





// 4. Submenú de vectores





// =================FIN MENÚS=====================

// =============INICIO ELEGIR OPCIÓN==============

void elegirOpcion(){
				short opcion;
				do{
					menuAlgoritmosBasicos();
					cin>>opcion;
					switch(opcion){
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
							cout<<"-------------------------------------"<<endl;
							cout<<"|    Volviendo al menu principal    |"<<endl;
							cout<<"-------------------------------------"<<endl;
							break;
						default:
							cout<<"Esa opcion no se encuentra disponible. Vuelva a intentar"<<endl;
							break;
					}
				}
				while(opcion!=6);
}

// =============FIN ELEGIR OPCIÓN==============



// =============INICIO EJERCICIOS==============

// --------1. Algoritmos básicos----------//	
	
//Ejercicio 1 ()


//Ejercicio 2 ()


//Ejercicio 3 ()


//Ejercicio 4 ()


//Ejercicio 5 ()



//--------2. Condicionales----------//	

//Ejercicio 1 ()


//Ejercicio 2 ()


//Ejercicio 3 ()


//Ejercicio 4 ()


//Ejercicio 5 ()



//--------3. Ciclos----------//	

//Ejercicio 1 ()


//Ejercicio 2 ()


//Ejercicio 3 ()


//Ejercicio 4 ()


//Ejercicio 5 ()



//--------4. Vectores----------//	

//Ejercicio 1 ()


//Ejercicio 2 ()


//Ejercicio 3 ()


//Ejercicio 4 ()


//Ejercicio 5 ()





int main(){
	short opcion;
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
				cout<<"-------------------------------------------"<<endl;
				cout<<"|  Gracias por utilizar nuestro programa  |"<<endl;
				cout<<"-------------------------------------------"<<endl;
				break;
			default:
				cout<<"Esa opcion no se encuentra disponible. Vuelva a intentar"<<endl;
				break;
				
		}
	}
	while(opcion!=5);	
}
