#pragma once

namespace VentiladorMecanicoController
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace VentiladorMecanicoModel;

	public ref class GestorPersona
	{
	private:
		List<Persona^>^ listaPersona;
	public:
		GestorPersona();
		void AgregarPersona(Persona^ objPersona);
		void EditarPersona(String^ DNI, Persona^ objPersona);
		void EliminarPersona(String^ DNI);
		List<Persona^>^ BuscarPersonaXNombre(String^ nombre);
		int BuscarPersonaXDNI(String^ DNI);
		int ObtenerCantidad();
		
	};
}
