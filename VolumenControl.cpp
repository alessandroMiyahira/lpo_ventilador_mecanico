#include "VolumenControl.h"

using namespace VentiladorMecanicoModel;

VolumenControl::VolumenControl( float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar, float volumenCorriente, float alarmaPresionMax):ModoVentilatorio(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar ) {
	this-> volumenCorriente;
	this-> alarmaPresionMax;
}
