#include "PresionControl.h"

using namespace VentiladorMecanicoModel;

PresionControl::PresionControl(float PEEP, float concentracionO2, float retardoInspiratorio, float complasencia, float resistenciaAlveolar, float alarmaVolMin, float alarmaVolMax, float PCsobrePEEP) : ModoVentilatorio(PEEP, concentracionO2, retardoInspiratorio, complasencia, resistenciaAlveolar)
{
	this->alarmaVolMin=alarmaVolMin;
	this->alarmaVolMax=alarmaVolMax;
	this->PCsobrePEEP=PCsobrePEEP;
}
