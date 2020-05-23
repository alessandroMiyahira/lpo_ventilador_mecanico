#pragma once
#include "ModoVentilatorio.h"


namespace VentiladorMecanicoModel
{
	using namespace System;
	public ref class VolumenControl:public ModoVentilatorio
	{
	private:
		float volumenCorriente;
		float alarmaPresionMax;
		
	public:
		VolumenControl(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar, float volumenCorriente, float alarmaPresionMax );
	};
}
