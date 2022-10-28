/***********************************************************************
 * Module:  persona
 * Author:  Javier Gonzaga, Francisco Teran
 * Modified: Jueves, 27 de octubre de 2022 17:02:24
 * Purpose: Declaration of the class persona
 ***********************************************************************/

#include <iostream>
#include "persona.h"
#include <ctime>

using namespace std;

std::string persona::getNombre(void) {
	return nombre;
}
void persona::setNombre( std::string& newNombre) {
	nombre = newNombre;
}
std::string persona::getApellido(void) {
	return apellido;
}
void persona::setApellido( std::string& newApellido) {
	apellido = newApellido;
}
std::string persona::getCorreo(void) {
	return correo;
}
void persona::setCorreo( std::string& newCorreo) {
	correo = newCorreo;
}
int persona::getDia(void) {
	return dia;
}
int persona::getMes(void) {
	return mes;
}
int persona::getAnio(void) {
	return anio;
}
void persona::setDia(int newdia) {
	dia= newdia;
}
void persona::setMes(int newmes) {
	mes= newmes;
}
void persona::setAnio(int newanio) {
	anio= newanio;
}
persona::persona(std::string& nombre, std::string& apellido, std::string& correo, int dia,int mes,int anio) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->correo = correo;
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}
int persona::calcularEdad(int dia,int mes,int anio){
	int resultado;
    time_t now=time(0);
    tm*time=localtime(&now);
    int year=1900+time->tm_year;

  resultado=year-anio;
    
    if(resultado>0) {
		if(mes<time-> tm_mon+1) {
        	resultado=year-anio;
    	} else {
    		if(mes==time-> tm_mon+1) {
        		if(dia<=time->tm_mday) {
            		resultado=year-anio;
            	} else {
            		resultado=year-(anio+1);
            	}
    		} else {
        		if(mes>=time-> tm_mon+1){
            		resultado=year-(anio+1);
            	}       
        	}
        }
    } else {
        cout<<"ese anio, mes o dia son incorrectos  "<<endl;
    }
	return resultado;
}


void persona::imprimirDatos(persona obj) {
	cout<<"Nombre: "<<obj.getNombre()<<"\nApellido: "<<obj.getApellido()<<"\nCorreo: "<<obj.getCorreo()<<"\nEdad: "<<calcularEdad(dia, mes, anio)<<endl;
}
