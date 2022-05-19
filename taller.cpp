#include <iostream>
#include <math.h>
using namespace std;

//Hacer 5 ejercicios de cada tema utilizando funciones y procedimientos (Algoritmos b?sicos, condicionales, ciclos y vectores.) Utilizar un men? en consola.

// =================INICIO MEN?S==================


// Men? principal

void menu(){
	cout<<"----<MENU>----"<<endl;
	cout<<"1. Algoritmos basicos."<<endl;
	cout<<"2. Condicionales."<<endl;
	cout<<"3. Ciclos."<<endl;
	cout<<"4. Vectores"<<endl;
	cout<<"5. Salir"<<endl;
}

// 1. Submen? de algoritmos b?sicos

void menuAlgoritmosBasicos(){
	cout<<"----<MENU ALGORITMOS BASICOS>----"<<endl;
	cout<<"1. Cuadrado de un numero."<<endl;
	cout<<"2. Suma de dos numeros."<<endl;
	cout<<"3. Calcular hipotenusa."<<endl;
	cout<<"4. Promedio de un estudiante."<<endl;
	cout<<"5. Expresar en horas, minutos y segundos un tiempo dado en segundos."<<endl;
	cout<<"6. Salir"<<endl;
}

// 2. Submen? de condicionales





// 3. Submen? de ciclos

void menuCiclos(){
	cout<<"----<MENU CICLOS>----"<<endl;
	cout<<"1. Sumar numeros pares del 2 al 100"<<endl;
	cout<<"2. Calcular la media de 50 numeros"<<endl;
	cout<<"3. Sumar 10 numeros"<<endl;
	cout<<"4. ¿N es primo?"<<endl;
	cout<<"5. Dados 10 numeros enteros, mostrar la suma de los elementos pares, cuantos pares hay y promedio de numeros impares"<<endl;
	cout<<"6. Salir"<<endl;
}

// 4. Submen? de vectores

void menuVectores(){
	cout<<"----<MENU VECTORES>----"<<endl;
	cout<<"1. Leer vector de numeros y sumar elementos pares"<<endl;
	cout<<"2. Leer vector de numeros y sumar elementos impares en posiciones pares"<<endl;
	cout<<"3. Leer vector de numeros y decir mayor y menor elemento"<<endl;
	cout<<"4. Leer dos vectores y decir que son iguales"<<endl;
	cout<<"5. Encontrar cuantas veces aparece un dato en un vector"<<endl;
	cout<<"6. Salir"<<endl;
}

// =================FIN MEN?S=====================

int Suma(int num1, int num2);
float Promedio(float n1, float n2, float n3);
float media50();
// =============INICIO ELEGIR OPCI?N==============

void elegirOpcionAlgoritmos(){
				short opcion;
				do{
					menuAlgoritmosBasicos();
					cin>>opcion;
					switch(opcion){
						case 1:
							//funci?n ejercicio 1
							break;
						case 2:
							int num1, num2; 
							cout<<"Ingrese los numeros que desea sumar"<<endl;
							cin>>num1>>num2;
							cout<<"EL resultado es: "<<Suma(num1, num2)<<endl<<endl;
							break;
						case 3:
							//funci?n ejercicio 3
							break;
						case 4:
							float n1, n2, n3;
							cout<<"Ingrese sus 3 notas: "<<endl;
							cin>>n1>>n2>>n3;
							cout<<"EL promedio es: "<<Promedio(n1, n2, n3)<<endl<<endl;
							break;
						case 5:
							//funci?n ejercicio 5
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
void elegirOpcionCiclos(){
				short opcion;
				do{
					menuCiclos();
					cin>>opcion;
					switch(opcion){
						case 1:
							//funci?n ejercicio 1
							break;
						case 2:
							cout<<"La media es: "<<media50()<<endl<<endl;
							break;
						case 3:
							//funci?n ejercicio 3
							break;
						case 4:
							//funci?n ejercicio 4
							break;
						case 5:
							//funci?n ejercicio 5
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
void elegirOpcionVectores(){
				short opcion;
				do{
					menuVectores();
					cin>>opcion;
					switch(opcion){
						case 1:
							//funci?n ejercicio 1
							break;
						case 2:
							//funci?n ejercicio 2
							break;
						case 3:
							//funci?n ejercicio 3
							break;
						case 4:
							//funci?n ejercicio 4
							break;
						case 5:
							//funci?n ejercicio 5
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

// =============FIN ELEGIR OPCI?N==============



// =============INICIO EJERCICIOS==============

// --------1. Algoritmos b?sicos----------//	
	
//Ejercicio 1 ()


int Suma(int num1, int num2 )
{
	return num1+num2;
}


//Ejercicio 3 ()


float Promedio(float n1, float n2, float n3)
{
	float suma= n1 + n2 + n3;
	float promedio= suma/3;
	return promedio;
}


//Ejercicio 5 ()



//--------2. Condicionales----------//	

//Ejercicio 1 ()


//Ejercicio 2 ()


//Ejercicio 3 ()


//Ejercicio 4 ()


//Ejercicio 5 ()



//--------3. Ciclos----------//	

//Ejercicio 1 ()


float media50()
{
	float prom;
	float suma;
	for(int i= 0; i<50; i++)
	{
		cout<<"ingrese el numero "<<i+1<<":"<<endl;
		int n;
		cin>>n;
		suma= suma + n;
	}
	prom= suma/50;
	return prom;
}


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
				elegirOpcionAlgoritmos();
				break;
			case 2:
				//menuEjercicios();
				break;
			case 3:
				elegirOpcionCiclos();
				break;
			case 4:
				elegirOpcionVectores();
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
