#pragma once
#include "ModoVentilatorio.h"

namespace VentiladorMecanicoModel
{
	using namespace System;
	public ref class Mandatorio :public ModoVentilatorio
	{
	private:
		float tiempoInspiracion;
		float triggerFlujo;
		float frecuencia;
	public:
		Mandatorio(float PEEP, float concentracionO2, float retardoInspiratorio, float complacencia, double resistenciaAlveolar, float tiempoInspiracion, float triggerFlujo, float frecuencia);

	};
}