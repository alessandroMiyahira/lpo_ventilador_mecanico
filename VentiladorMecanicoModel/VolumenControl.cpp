#include "VolumenControl.h"

using namespace VentiladorMecanicoModel;

VolumenControl::VolumenControl( float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar, float volumenCorriente, float alarmaPresionMax):ModoVentilatorio(PEEP, concentracionO2, retardoInspiratorio, complasencia, resistenciaAlveolar) 
{
	this-> volumenCorriente;
	this-> alarmaPresionMax;
}
