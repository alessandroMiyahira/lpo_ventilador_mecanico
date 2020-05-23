#pragma once

namespace VentiladorMecanicoModel
{
	using namespace System;

	public ref class Persona
	{
	public:
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ DNI;
		String^ sexo;
		float estatura;
		String^ fechaIngreso;
		String^ horaIntubacion;
		int edad;
		String^ horaEntrada;

	public:
		Persona(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ DNI, String^ sexo, float estatura, String^ fechaIngreso, String^ horaIntubacion, int edad, String^ horaEntrada);
	};
}
