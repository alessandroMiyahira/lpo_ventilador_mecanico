#include "PresionControl.h"

using namespace VentiladorMecanicoModel;

PresionControl::PresionControl(float tiempoInspiracion, float triggerFlujo, float frecuencia, float alarmaVolMin, float alarmaVolMax, float PCsobrePEEP):Mandatorio(PEEP,concentracionO2,retardoInspiratorio,complacencia,resistenciaAlveolar,tiempoInspiracion,triggerFlujo,frecuencia){
	this->alarmaVolMin=alarmaVolMin;
	this->alarmaVolMax=alarmaVolMax;
	this->PCsobrePEEP=PCsobrePEEP;
}
