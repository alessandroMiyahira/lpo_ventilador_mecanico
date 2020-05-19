#include"Mandatorio.h"

using namespace VentiladorMecanicoModel;

Mandatorio::Mandatorio(float PEEP, float concentracionO2, float retardoInspiratorio, float complacencia, double resistenciaAlveolar, float tiempoInspiracion, float triggerFlujo, float frecuencia):ModoVentilatorio(PEEP,concentracionO2,retardoInspiratorio,complacencia,resistenciaAlveolar)
{
	this->tiempoInspiracion = tiempoInspiracion;
	this->triggerFlujo = triggerFlujo;
	this->frecuencia = frecuencia;
}