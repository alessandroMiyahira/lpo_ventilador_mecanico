#pragma once

namespace VentiladorMecanicoModel
{
	using namespace System;

	public ref class Sensor
	{
	private:
		
		float flujo;
		float presionAlveolar;
		float presionTraqueal;
		float tiempo;

	public:
		Sensor(float flujo, float presionAlveolar, float presionTraqueal, float tiempo);
	};
}
