#include "Pulmon.h"

using namespace VentiladorMecanicoModel;

Pulmon::Pulmon(float FlujoAireInspirado, float FlujoAireEspirado, float PresionTraqueal, float PresionAlveolar, float PEEP, float Volumen, float Complacencia, float ResisViasAereas, float MaxDifPresionAlvPEEP, float MaxDifPresionViasAlv, Persona^ ObjPersona)
{
	this->FlujoAireInspirado = FlujoAireInspirado;
	this->FlujoAireEspirado = FlujoAireEspirado;
	this->PresionTraqueal = PresionTraqueal;
	this->PresionAlveolar = PresionAlveolar;
	this->PEEP = PEEP;
	this->Volumen = Volumen;
	this->Complacencia = Complacencia;
	this->ResisViasAereas = ResisViasAereas;
	this->MaxDifPresionAlvPEEP = MaxDifPresionAlvPEEP;
	this->MaxDifPresionViasAlv = MaxDifPresionViasAlv;
	this->ObjPersona = ObjPersona;

}