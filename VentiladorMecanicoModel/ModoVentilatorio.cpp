#include "ModoVentilatorio.h"

using namespace VentiladorMecanicoModel;

ModoVentilatorio::ModoVentilatorio(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar)
{
	this->PEEP = PEEP;
	this->concentracionO2 = concentracionO2;
	this->retardoInspiratorio = retardoInspiratorio;
	this->complasencia = complasencia;
	this->resistenciaAlveolar = resistenciaAlveolar;
}
