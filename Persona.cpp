#include "Persona.h"

using namespace VentiladorMecanicoModel;

Persona::Persona(String^ nombre, String^ apellido, String^ DNI, String^ sexo, float estatura, String^ fechaIngreso, String^ horaIntubacion, int edad, String^ horaEntrada)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->DNI = DNI;
	this->sexo = sexo;
	this->estatura = estatura;
	this->fechaIngreso = fechaIngreso;
	this->horaIntubacion = horaIntubacion;
	this->edad = edad;
	this->horaEntrada = horaEntrada;
}
