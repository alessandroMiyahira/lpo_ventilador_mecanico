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
		PresionControl( float alarmaVolMin, float alarmaVolMax, float PCsobrePEEP);
	protected:
	}	
}
