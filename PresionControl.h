#pragma once
#include "Mandatorio.h"

namespace VentiladorMecanicoModel{
	
	using namespace System;
	
	public ref class PresionControl : public Mandatorio {
	
	public:
		PresionControl(float tiempoInspiracion, float triggerFlujo, float frecuencia, float alarmaVolMin, float alarmaVolMax, float PCsobrePEEP);
	private:
		float alarmaVolMin;
		float alarmaVolMax;
		float PCsobrePEEP;
	protected:
	}	
}
