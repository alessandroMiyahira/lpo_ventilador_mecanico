#include "Espontaneo.h"

using namespace VentiladorMecanicoModel;

Espontaneo::Espontaneo(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar, float^ PCsobrePEEP, float^ triggerPresion, float^ finalInspiratorio, float^ alarmaVolMax, float^ alarmaVolMin):ModoVentilatorio(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar )
{
	this->PCsobrePEEP = PCsobrePEEP;
	this->triggerPresion = triggerPresion;
	this->finalInspiratorio = finalInspiratorio;
	this->alarmaVolMax = alarmaVolMax;
	this->alarmaVolMin = alarmaVolMin;
}
