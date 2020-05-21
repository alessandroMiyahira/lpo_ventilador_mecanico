#pragma once


namespace VentiladorMecanicoModel{
	
	using namespace System;
	
	public ref class PresionControl  {
	
	private:
		float alarmaVolMin;
		float alarmaVolMax;
		float PCsobrePEEP;
		
	public:
		PresionControl( float alarmaVolMin, float alarmaVolMax, float PCsobrePEEP);
	protected:
	}	
}
