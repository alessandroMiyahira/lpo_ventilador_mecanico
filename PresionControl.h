#pragma once

namespace VentiladorMecanicoModel{
	
	using namespace System;
	
	public ref class PresionControl{
	
	public:
		PresionControl(float alarmaVolMin, float alarmaVolMax, float PCsobrePEEP);
	private:
		float alarmaVolMin;
		float alarmaVolMax;
		float PCsobrePEEP;
	protected:
	}	
}
