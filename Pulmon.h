#pragma once
#include "Persona.h"

namespace VentiladorMecanicoModel
{
	using namespace System;

	public ref class Pulmon
	{
	private:

		float FlujoAireInspirado;
		float FlujoAireEspirado;
		float PresionTraqueal;
		float PresionAlveolar;
		float PEEP;
		float Volumen;
		float Complacencia;
		float ResisViasAereas;
		float MaxDifPresionAlvPEEP;
		float MaxDifPresionViasAlv;
		Persona^ ObjPersona;

	public:

		Pulmon(float FlujoAireInspirado, float FlujoAireEspirado, float PresionTraqueal, float PresionAlveolar, float PEEP, float Volumen, float Complacencia, float ResisViasAereas, float MaxDifPresionAlvPEEP, float MaxDifPresionViasAlv, Persona^ ObjPersona);


	}; 
}