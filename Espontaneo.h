#pragma once

namespace VentiladorMecanicoModel
{
	using namespace System;

	public ref class Espontaneo
	{
	private:

		float PCsobrePEEP;
		float triggerPresion;
		float finalInspiratorio;
		float alarmaVolMax;
		float alarmaVolMin;

	public:
		Espontaneo(float PCsobrePEEP, float triggerPresion, float finalInspiratorio, float alarmaVolMax, float alarmaVolMin);
	};
}