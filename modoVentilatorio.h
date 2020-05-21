#pragma once

#include "Persona.h"

namespace VentiladorMecanicoModel
{
	using namespace System;
	public ref class modoVentilatorio 
	{
	private:
		 float PEEP;
		 float concentracionO2;
     float retardoInspiratorio;
     float complasencia;
     float resistenciaAlveolar;
	public:
		VolumenControl(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar );
	};
}
