#include "Espontaneo.h"

using namespace VentiladorMecanicoModel;

Espontaneo::Espontaneo(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar, float PCsobrePEEP, float triggerPresion, float finalInspiratorio, float alarmaVolMax, float alarmaVolMin): ModoVentilatorio( PEEP, concentracionO2, retardoInspiratorio, complasencia, resistenciaAlveolar )
{
	this->PCsobrePEEP = PCsobrePEEP;
	this->triggerPresion = triggerPresion;
	this->finalInspiratorio = finalInspiratorio;
	this->alarmaVolMax = alarmaVolMax;
	this->alarmaVolMin = alarmaVolMin;
}
