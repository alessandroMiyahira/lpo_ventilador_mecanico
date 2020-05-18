#pragma once

namespace VentiladorMecanicoModel
{
	using namespace System;

	public ref class Persona
	{
	private:
		String^ nombre;
		String^ apellido;
		String^ DNI;
		String^ sexo;
		float estatura;
		String^ fechaIngreso;
		String^ fechaSalida;
		int edad;
		String^ horaEntrada;

	public:
		Persona(String^ nombre, String^ apellido, String^ DNI, String^ sexo, float estatura, String^ fechaIngreso, String^ fechaSalida, int edad, String^ horaEntrada);
	};
}