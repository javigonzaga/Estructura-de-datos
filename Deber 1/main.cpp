/***********************************************************************
 * Module:  main
 * Author:  Javier Gonzaga, Francisco Teran
 * Modified: Jueves, 27 de octubre de 2022 17:02:24
 * Purpose: Declaration of the class main
 ***********************************************************************/

#include <iostream>
#include "persona.cpp"

using namespace std;

int main() {
	std::string nombre, apellido, correo;
	int dia,mes,anio;
	
	cout<<"Ingrese su nombre: ";
	getline(cin, nombre);
	cout<<"Ingrese su apellido: ";
	getline(cin, apellido);
	cout<<"Ingrese su correo: ";
	getline(cin, correo);
	cout<<"Ingrese su fecha de nacimiento"<<endl;
	cout<<"dia: ";
    cin>>dia;
	cout<<"mes: ";
	cin>>mes;
	cout<<"anio: ";
	cin>>anio;
	persona *obj= new persona(nombre, apellido, correo, dia, mes, anio);
	obj->imprimirDatos(*obj);
	
}
