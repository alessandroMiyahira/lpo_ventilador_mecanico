#include "Persona.h"

using namespace VentiladorMecanicoModel;

Persona::Persona(String^ nombre, String^ apellido, String^ DNI, String^ sexo, float estatura, String^ fechaIngreso, String^ fechaSalida, int edad, String^ horaEntrada)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->DNI = DNI;
	this->sexo = sexo;
	this->estatura = estatura;
	this->fechaIngreso = fechaIngreso;
	this->fechaSalida = fechaSalida;
	this->edad = edad;
	this->horaEntrada = horaEntrada;
}