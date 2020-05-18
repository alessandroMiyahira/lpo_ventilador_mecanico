#pragma once
#include "Pulmon.h"

namespace VentiladorMecanicoModel
{
	using namespace System;

	public ref class Regulacion : public Pulmon
	{
		Regulacion(float FlujoAireInspirado, float FlujoAireEspirado, float PresionTraqueal, float PresionAlveolar, float PEEP, float Volumen, float Complacencia, float ResisViasAereas, float MaxDifPresionAlvPEEP, float MaxDifPresionViasAlv, Persona^ ObjPersona);
	};
}
