#pragma once

#include "Persona.h"

namespace VentiladorMecanicoModel
{
	using namespace System;
	public ref class ModoVentilatorio 
	{
	private:
		 float PEEP;
		 float concentracionO2;
     float retardoInspiratorio;
     float complasencia;
     float resistenciaAlveolar;
	public:
		ModoVentilatorio(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar );
	};
}
