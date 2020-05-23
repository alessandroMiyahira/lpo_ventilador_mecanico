#pragma once
#include "ModoVentilatorio.h"

namespace VentiladorMecanicoModel
{
	using namespace System;

	public ref class Espontaneo : public ModoVentilatorio
	{
	private:

		float PCsobrePEEP;
		float triggerPresion;
		float finalInspiratorio;
		float alarmaVolMax;
		float alarmaVolMin;

	public:
		Espontaneo(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar, float PCsobrePEEP, float triggerPresion, float finalInspiratorio, float alarmaVolMax, float alarmaVolMin);
	};
}
