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
	cout<<endl<<"----<MENU ALGORITMOS BASICOS>----"<<endl;
	cout<<"1. Cuadrado de un numero."<<endl;
	cout<<"2. Suma de dos numeros."<<endl;
	cout<<"3. Calcular hipotenusa."<<endl;
	cout<<"4. Promedio de un estudiante."<<endl;
	cout<<"5. Expresar en horas, minutos y segundos un tiempo dado en segundos."<<endl;
	cout<<"6. Salir"<<endl;
}

// 2. Submen? de condicionales

void menuCondicionales(){
	cout<<endl<<"----<MENU CONDICIONALES>----"<<endl;
	cout<<"1. Saber si un alumno aprobo o reprobo el curso."<<endl;
	cout<<"2. Determinar el mayor de 3 numeros"<<endl;
	cout<<"3. Dado un caracter, determinar si es vocal"<<endl;
	cout<<"4. Dado dos numeros y el operador (+, -, *, /), realizar la operacion indicada"<<endl;
	cout<<"5. Dado un año, determinar si es bisiesto o no."<<endl;
	cout<<"6. Salir"<<endl;
}


// 3. Submen? de ciclos

void menuCiclos(){
	cout<<endl<<"----<MENU CICLOS>----"<<endl;
	cout<<"1. Sumar numeros pares del 2 al 100"<<endl;
	cout<<"2. Calcular la media de 50 numeros"<<endl;
	cout<<"3. Sumar 10 numeros"<<endl;
	cout<<"4. ¿N es primo?"<<endl;
	cout<<"5. Dados 10 numeros enteros, mostrar la suma de los elementos pares, cuantos pares hay y promedio de numeros impares"<<endl;
	cout<<"6. Salir"<<endl;
}

// 4. Submen? de vectores

void menuVectores(){
	cout<<endl<<"----<MENU VECTORES>----"<<endl;
	cout<<"1. Leer vector de numeros y sumar elementos pares"<<endl;
	cout<<"2. Leer vector de numeros y sumar elementos impares en posiciones pares"<<endl;
	cout<<"3. Leer vector de numeros y decir mayor y menor elemento"<<endl;
	cout<<"4. Leer dos vectores y averiguar si iguales"<<endl;
	cout<<"5. Encontrar cuantas veces aparece un dato en un vector"<<endl;
	cout<<"6. Salir"<<endl;
}



// Mensaje de salida de submenu

void salidaSubmenu(){
	cout<<"-------------------------------------"<<endl;
	cout<<"|    Volviendo al menu principal    |"<<endl;
	cout<<"-------------------------------------"<<endl;
}



// =================FIN MEN?S=====================


// ===========INICIALIZACIÓN DE FUNCIONES=========
int cuadrado(int num);
double hipotenusa(double cat1, double cat2);
void expresarHoras(int segundos);
int Suma(int num1, int num2);
float Promedio(float n1, float n2, float n3);
float media50();
int determinarMayor(int num1, int num2, int num3);
float hacerOperacion(float num1, char operacion, float num2);
int sumarPares(int numInicio, int numFin);
int sumarNumeros(int cantNumeros);
int sumarNumerosPares(int cantNumeros);
int leerTamanoVector();
int *leerVector(int vect[], int tamano);
int sumarVectorImpares(int vect[], int tamano);
bool vectoresIguales(int vect1[], int vect2[], int tamano);
bool primo(int n);
void Aprobar(float promedio);
void vocal(char letra);
int bisiesto(int anno);
int sumarVectorPares(int vec[], int tamano);
int averiguarMayorMenor(int vec[],int tamano);
int vecesDato(int vec[], int tamano, int n);

// ========FIN INICIALIZACIÓN DE FUNCIOES=========



// =============INICIO ELEGIR OPCI?N==============

// 1. Elegir opción algoritmos básicos.
void elegirOpcionAlgoritmos(){
	short opcion;
	do{
		menuAlgoritmosBasicos();
		cin>>opcion;
		switch(opcion){
			case 1:
				//Calcular la potencia.
				int num;
				cout<<"Ingrese un numero"<<endl;
				cin>>num;
				cout<<"El resultado es: "<<cuadrado(num)<<endl<<endl;
				break;
			case 2:
				int num1, num2; 
				cout<<"Ingrese los numeros que desea sumar"<<endl;
				cin>>num1>>num2;
				cout<<"El resultado es: "<<Suma(num1, num2)<<endl<<endl;
				
				break;
			case 3:
				//Calcular hipotenusa.
				double cat1, cat2;
				cout<<"Ingrese el valor de ambos catetos"<<endl;
				cin>>cat1>>cat2;
				cout<<"La hipotenusa es: "<<hipotenusa(cat1, cat2)<<endl<<endl;
				break;
			case 4:
				float n1, n2, n3;
				cout<<"Ingrese sus 3 notas: "<<endl;
				cin>>n1>>n2>>n3;
				cout<<"EL promedio es: "<<Promedio(n1, n2, n3)<<endl<<endl;
				break;
			case 5:
				//Expresar en horas, minutos y segundos un tiempo dado en segundos.
				int segundos;
				cout<<"Ingrese la cantidad de segundos"<<endl;
				cin>>segundos;
				expresarHoras(segundos);
				break;
			case 6:
				salidaSubmenu();
				break;
			default:
				cout<<"Esa opcion no se encuentra disponible. Vuelva a intentar"<<endl;
				break;
		}
	}
	while(opcion!=6);
}



// 2. Elegir opción condicionales.
void elegirOpcionCondicionales(){
	short opcion;
	do{
		menuCondicionales();
		cin>>opcion;
		switch(opcion){
			case 1:
				{
				int n1, n2, n3;
				cout<<"ingrese sus 3 notas:"<<endl;
				cin>>n1>>n2>>n3;
				float promedio=Promedio(n1, n2, n3);
				Aprobar(promedio);
				cout<<"su nota fue:"<<promedio<<endl;
				break;
				}
			case 2:
				//Determinar el mayor de 3 numeros
				int num1, num2, num3;
				cout<<"Ingrese los 3 numeros"<<endl;
				cin>>num1>>num2>>num3;
				cout<<"El numero mayor es: "<<determinarMayor(num1, num2, num3)<<endl;
				break;
			case 3:
				//Dado un caracter determinar si es vocal
				char letra;
				cout<<"Ingrese una letra"<<endl;
				cin>>letra;
				vocal(letra);
				break;
			case 4:
				//Dado dos numeros y el operador (+, -, *, /), realizar la operacion indicada
				float numero1, numero2;
				char operador;
				cout<<"Ingrese la operacion"<<endl;
				cin>>numero1>>operador>>numero2;
				cout<<"El resultado es: "<<hacerOperacion(numero1, operador, numero2)<<endl;
				
				break;
			case 5:
				//año bisiesto
				cout<<"ingrese el año:"<<endl;
				int anno;
				cin>>anno;
				bisiesto(anno);
				break;
			case 6:
				salidaSubmenu();
				break;
			default:
				cout<<"Esa opcion no se encuentra disponible. Vuelva a intentar"<<endl;
				break;
		}
	}
	while(opcion!=6);
}


// 3. Elegir opción ciclos.
void elegirOpcionCiclos(){
	short opcion;
	do{
		menuCiclos();
		cin>>opcion;
		switch(opcion){
			case 1:
				//Sumar numeros pares del 2 al 100
				cout<<"La suma es: "<<sumarPares(2, 100)<<endl;
				break;
			case 2:
				cout<<"La media es: "<<media50()<<endl<<endl;
				break;
			case 3:
				//Sumar 10 numeros
				cout<<"La suma de los numeros es: "<<sumarNumeros(10)<<endl;
				break;
			case 4:
				int n;
				int cont;
				cout<<"Ingrese el numero"<<endl;
				cin>>n;
				if(primo(n))
				{
					cout<<"es primo"<<endl;
				}else
				{
					cout<<"no es primo"<<endl;
				}
				
				break;
			case 5:
				//Dados 10 numeros enteros, mostrar la suma de los elementos pares, cuantos pares hay y promedio de numeros impares
				sumarNumerosPares(10);
				
				break;
			case 6:
				salidaSubmenu();
				break;
			default:
				cout<<"Esa opcion no se encuentra disponible. Vuelva a intentar"<<endl;
				break;
		}
	}
	while(opcion!=6);
}


// 4. Elegir opción vectores.
void elegirOpcionVectores(){
	short opcion;
	do{
		menuVectores();
		cin>>opcion;
		switch(opcion){
			case 1:
				{
				//Leer vector y sumar elementos pares
				int tamano =leerTamanoVector();
				int vec[tamano];
				int *vecCopia= leerVector(vec, tamano);
				cout<<"La suma es: "<<sumarVectorPares(vec, tamano)<<endl;
				}
				break;
			case 2:{
				//Leer vector de numeros y sumar elementos impares en posiciones pares
				int tamano = leerTamanoVector();
				
				int vect[tamano];
				int *vectCopia = leerVector(vect, tamano);
				cout<<"La suma de los numeros impares en posiciones pares es: "<<sumarVectorImpares(vect, tamano)<<endl;
				
				break;	
			}
				
			case 3:
				{
				//Leer vector de numeros y decir mayor y menor elemento
				int tamano= leerTamanoVector();
				int vec[tamano];
				int *vectCopia = leerVector(vec, tamano);
				averiguarMayorMenor(vec, tamano);
				}
				break;
			case 4:{
				//Leer dos vectores y averiguar si iguales
				int tamano = leerTamanoVector();
				int vect1[tamano];
				int vect2[tamano];
				cout<<"-----<VECTOR 1>-----"<<endl;
				int *vectCopia1 = leerVector(vect1, tamano);
				cout<<"-----<VECTOR 2>-----"<<endl;
				int *vectCopia2 = leerVector(vect2, tamano);
				
				if(vectoresIguales(vect1, vect2, tamano)){
					cout<<"Los vectores son iguales"<<endl;
				}else{
					cout<<"Los vectores no son iguales"<<endl;
				}
				
				break;
			}
			case 5:
				{
				//Encontrar cuantas veces aparece un dato en un vector
				int tamano= leerTamanoVector();
				int vec[tamano];
				int *vecCopia= leerVector(vec, tamano);
				int n;
				cout<<"Ingrese el numero que desea ver cuantas veces se repite:"<<endl;
				cin>>n;
				cout<<"El numero se repite "<<vecesDato(vec, tamano,n)<<endl;
				break;
				}
			case 6:
				salidaSubmenu();
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
	
//Ejercicio 1 - Calcular el cuadrado de un número

int cuadrado(int num){
	return pow(num, 2);
}


//Ejercicio 2 - Suma de dos números

int Suma(int num1, int num2 )
{
	return num1+num2;
}


//Ejercicio 3 - Calcular la hipotenusa

double hipotenusa(double cat1, double cat2){
	return sqrt(pow(cat1, 2) + pow(cat2, 2));
}


//Ejercicio 4 - Promedio de notas de un alumno

float Promedio(float n1, float n2, float n3)
{
	float suma= n1 + n2 + n3;
	float promedio= suma/3;
	return promedio;
}


//Ejercicio 5 - Expresar en horas, minutos y segundos un tiempo dado en segundos.

void expresarHoras(int segundos){
	int horas, minutos, segundosNuevos, residuo;
	horas = segundos / 3600;
	segundos = segundos % 3600;
	minutos = segundos / 60;
	segundos = segundos % 60;
	
	cout<<"Horas: "<<horas<<endl<<"Minutos: "<<minutos<<endl<<"Segundos: "<<segundos<<endl<<endl<<endl;
}






//--------2. Condicionales----------//	

//Ejercicio 1 () - Determinar si aprobo el curso
void Aprobar(float promedio)
{
	if(promedio>=3)
	{
		cout<<"El estudiante aprobo el curso"<<endl;
	}else
	{
		cout<<"El estudiante reprobo"<<endl;
	}
}


//Ejercicio 2 - Determinar el mayor de 3 numeros

int determinarMayor(int num1, int num2, int num3){
	if(num1>num2 && num1>num3){
		return num1;
	} else if(num2>num3){
		return num2;
	} else{
		return num3;
	}
}


//Ejercicio 3 - Determinar si es vocal
void vocal(char letra)
{
if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
{
	cout<<"Es una vocal"<<endl;
}else
{
	cout<<"no es una vocal"<<endl;
}
}


//Ejercicio 4 - Dado dos numeros y el operador (+, -, *, /), realizar la operacion indicada

float hacerOperacion(float num1, char operador, float num2){
	switch(operador){
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			return num1 / num2;
			break;
		default:
			return -9999;
	}
}


//Ejercicio 5 - año bisiesto
int bisiesto(int anno)
{
if(anno%4==0 && anno%100!=0 || anno%400==0)
{
	cout<<"Es bisiesto"<<endl;
}else
{
	cout<<"No es bisiesto"<<endl;
}
}



//--------3. Ciclos----------//	

//Ejercicio 1 - Sumar numeros pares del 2 al 100

int sumarPares(int numInicio, int numFin){
	int suma;
	for(int i=numInicio; i<=numFin; i = i + 2){
		suma = suma + i;
	}
	return suma;
}


//Ejercicio 2 - Media aritmetica de 50 números

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


//Ejercicio 3 - Sumar 10 numeros

int sumarNumeros(int cantNumeros){
	int suma, num;
	for(int i = 0; i<cantNumeros; i++){
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		suma = suma + num;
	}
	return suma;
}


//Ejercicio 4 - ¿N es primo?
bool primo(int n)
{
	int cont = 0;
	for(int i=1; i<=n+1; i++)
	{
	if( n%i==0)
	{
		cont= cont + 1;
	}		
	}
	if(cont>2 || n==1)
		{
			return false;
		}
	return true;
}


//Ejercicio 5 - Dados 10 numeros enteros, mostrar la suma de los elementos pares, cuantos pares hay y promedio de numeros impares
int sumarNumerosPares(int cantNumeros){
	int suma, num, cont, sumaImpares, contImpares;
	suma = 0;
	sumaImpares = 0;
	cont = 0;
	contImpares = 0;
	for(int i = 0; i<cantNumeros; i++){
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		if(num % 2 == 0){
			suma = suma + num;
			cont++;
		} else {
			sumaImpares = sumaImpares + num;
			contImpares++;
		}
	}
	cout<<"La suma de los elementos pares es: "<<suma<<endl<<"La cantidad de pares que hay es: "<<cont<<endl<<"El promedio de numeros impares es: "<<sumaImpares/contImpares<<endl;
	return suma;
}



//--------4. Vectores----------//

// ----------- FUNCIONES GLOBALES (Para uso en varios ejercicios) -------------//

int leerTamanoVector(){
	int tamano;
	cout<<"Ingrese el tamano del vector: "<<endl;
	cin>>tamano;
	return tamano;
}

int *leerVector(int vect[], int tamano){
	
	for(int i = 0; i<tamano; i++){
		cout<<"Ingrese un numero ["<<i<<"]"<<endl;
		cin>>vect[i];
	}
	return vect;
}

// -----------------------------------------------------------------------------//


//Ejercicio 1 - leer vector y sumar elementos pares
int sumarVectorPares(int vec[], int tamano)
{
	int suma=0;
	for(int i=0; i<tamano;i++)
	{
		if(vec[i]%2==0)
		{
			suma=suma+vec[i];
		}
	 } 
	 return suma;
}


//Ejercicio 2 - Leer vector de numeros y sumar elementos impares en posiciones pares
int sumarVectorImpares(int vect[], int tamano){
	int suma;
	suma = 0;
	for(int i = 0; i<tamano; i++){
		if(i%2==0 && i!=0){
			if(vect[i] % 2 != 0){
				suma = suma + vect[i];
			}
		}
	}
	return suma;
	
}

//Ejercicio 3 - Leer vector de numeros y decir mayor y menor elemento.
int  averiguarMayorMenor(int vec[], int tamano)
{
	int mayor= 0;
	int menor=10000;
	for(int i=0; i<tamano;i++)
	{
		if(vec[i]>mayor)
		{
			mayor=vec[i];
		}
		if(vec[i]<menor)
		{
			menor=vec[i];
		}
	}
	cout<<"El numero mayor es "<<mayor<<endl;
	cout<<"El numero menor es "<<menor<<endl;
}


//Ejercicio 4 - Leer dos vectores y averiguar si iguales
bool vectoresIguales(int vect1[], int vect2[], int tamano){
	for(int i = 0; i<tamano; i++){
		if(vect1[i] != vect2[i]){
			return false;
		}
	}
	return true;
}


//Ejercicio 5 - Encontrar cuantas veces aparece un dato en un vector
int vecesDato(int vec[],int tamano,int n)
{
	int rep= 0;
	for(int i=0; i<tamano; i++)
	{
		if(vec[i]==n)
		{
			rep=rep+1;
		}
	}
	return rep;
}





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
				elegirOpcionCondicionales();
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
