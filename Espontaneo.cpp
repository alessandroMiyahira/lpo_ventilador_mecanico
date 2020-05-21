#include "Espontaneo.h"

using namespace VentiladorMecanicoModel;

Espontaneo::Espontaneo(float^ PCsobrePEEP, float^ triggerPresion, float^ finalInspiratorio, float^ alarmaVolMax, float^ alarmaVolMin)
{
	this->PCsobrePEEP = PCsobrePEEP;
	this->triggerPresion = triggerPresion;
	this->finalInspiratorio = finalInspiratorio;
	this->alarmaVolMax = alarmaVolMax;
	this->alarmaVolMin = alarmaVolMin;
}