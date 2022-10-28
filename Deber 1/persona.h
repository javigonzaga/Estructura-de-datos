/***********************************************************************
 * Module:  persona
 * Author:  Javier Gonzaga, Francisco Teran
 * Modified: Jueves, 27 de octubre de 2022 17:02:24
 * Purpose: Declaration of the class persona
 ***********************************************************************/
 
#if !defined(__Class_Diagram_2_persona_h)
#define __Class_Diagram_2_persona_h
#include <iostream>
#include <string.h>

class persona
{
public:
	
	std::string getNombre(void);
	void setNombre(std::string& newNombre);
	std::string getApellido(void);
	void setApellido(std::string& newApellido);
	std::string getCorreo(void);
	void setCorreo(std::string& newCorreo);
	int getDia(void);
	int getMes(void);
	int getAnio(void);
	void setDia(int newdia);
	void setMes(int newmes);
	void setAnio(int newanio);
	persona(std::string& nombre, std::string& apellido, std::string& correo, int dia, int mes, int anio);
	persona();
	int calcularEdad(int dia,int mes,int anio);
	void imprimirDatos(persona obj);
   
protected:
	
private:
	
	std::string nombre;
	std::string apellido;
	std::string correo;
	int dia;
	int mes;
	int anio;
};
#endif
