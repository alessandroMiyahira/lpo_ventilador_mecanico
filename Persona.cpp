#include "Persona.h"

using namespace VentiladorMecanicoModel;

Persona::Persona(String^ nombre, String^ apellidoPaterno, String^apellidoMaterno, String^ DNI, String^ sexo, float estatura, String^ fechaIngreso, String^ horaIntubacion, int edad, String^ horaEntrada)
{
	this->nombre = nombre;
	this->apellidoPaterno= apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->DNI = DNI;
	this->sexo = sexo;
	this->estatura = estatura;
	this->fechaIngreso = fechaIngreso;
	this->horaIntubacion = horaIntubacion;
	this->edad = edad;
	this->horaEntrada = horaEntrada;
}
