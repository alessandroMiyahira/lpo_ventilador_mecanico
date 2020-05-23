#pragma once
#include "ModoVentilatorio.h"


namespace VentiladorMecanicoModel{
	
	using namespace System;
	
	public ref class PresionControl: public ModoVentilatorio  {
	
	private:
		float alarmaVolMin;
		float alarmaVolMax;
		float PCsobrePEEP;
		
	public:
		PresionControl( float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar, float alarmaVolMin, float alarmaVolMax, float PCsobrePEEP);
	protected:
	}	
}


