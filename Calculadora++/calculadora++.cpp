#include <iostream> 
#include <conio.h>  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>   
#include <math.h> 
#include <iomanip>  
//IMPORTAR LIBRERIAS 
using namespace std;
main()					
{
	//Crear variables
	double numero1,numero2,suma,resta,multiplicacion,division;
	//pedir valores
	cout<<"\n ingresar numero1:";
	cin>>numero1;
	cout<<"\n ingresar numero2:";
	cin>>numero2;
	suma=numero1+numero2;
	cout<<"\n la suma es:"; //imprimir suma
	cout<<suma;
	resta=numero1-numero2;
	cout<<"\n la resta es:";//imprimir resta
	cout<<resta;
	multiplicacion=numero1*numero2;
	cout<<"\n la multiplicacion es:";//imprimir multi
	cout<<multiplicacion;
	division=numero1/numero2;
	cout<<"\n la division es:";
	cout<<division;
	cin.get();
	cin.get();
					}

