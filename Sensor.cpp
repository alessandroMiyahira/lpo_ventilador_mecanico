#include "Sensor.h"

using namespace VentiladorMecanicoModel;

Sensor::Sensor(float^ flujo, float^ presionAlveolar, float presionTraqueal. float tiempo)
{
	this->flujo = flujo;
	this->presionAlveolar = presionAlveolar;
	this->presionTraqueal = presionTraqueal;
	this->tiempo = tiempo;
}
