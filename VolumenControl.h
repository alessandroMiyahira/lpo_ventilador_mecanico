#pragma once
#include "ModoVentilatorio.h"


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
