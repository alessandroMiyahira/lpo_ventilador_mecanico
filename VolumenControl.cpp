#include "VolumenControl.h"

using namespace VentiladorMecanicoModel;

VolumenControl::VolumenControl(float tiempoInspiracion, float triggerFlujo, float frecuencia, float volumenCorriente, float alarmaPresionMax):Mandatorio( PEEP, concentracionO2, retardoInspiratorio,complacencia, resistenciaAlveolar,tiempoInspiracion,triggerFlujo,frecuencia) {
	this-> volumenCorriente;
	this-> alarmaPresionMax;
}
