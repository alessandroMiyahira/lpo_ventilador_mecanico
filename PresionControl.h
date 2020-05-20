#pragma once

namespace VentiladorMecanicoModel{
	
	using namespace System;
	
	public ref class PresionControl{
	
	public:
		PresionControl(float tiempoInspiracion, float triggerFlujo, float frecuencia, float alarmaVolMin, float alarmaVolMax, float PCsobrePEEP);
	private:
		float alarmaVolMin;
		float alarmaVolMax;
		float PCsobrePEEP;
	protected:
	}	
}
