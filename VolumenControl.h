#pragma once

#include "Mandatorio.h"

namespace VentiladorMecanicoModel
{
	using namespace System;
	public ref class VolumenControl :public Mandatorio 
	{
	private:
		float volumenCorriente;
		float alarmaPresionMax;
	public:
		VolumenControl(float tiempoInspiracion, float triggerFlujo, float frecuencia, float volumenCorriente, float alarmaPresionMax );
	};
}
