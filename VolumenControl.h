#pragma once



namespace VentiladorMecanicoModel
{
	using namespace System;
	public ref class VolumenControl:public ModoVentilatorio
	{
	private:
		float volumenCorriente;
		float alarmaPresionMax;
		
	public:
		VolumenControl( float volumenCorriente, float alarmaPresionMax );
	};
}
