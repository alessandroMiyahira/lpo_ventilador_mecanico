#include "GestorPersona.h"

using namespace VentiladorMecanicoController;

GestorPersona::GestorPersona()
{
	this->listaPersona = gcnew List<Persona^>;
}
void GestorPersona::AgregarPersona(Persona^ objPersona)
{
	this->listaPersona->Add(objPersona);
}
void GestorPersona::EditarPersona(String^ DNI, Persona^ objPersona)
{
	int indice = -1;
	indice = BuscarPersonaXDNI(DNI);
	if (indice != -1)
	{
		this->listaPersona->RemoveAt(indice);
		this->listaPersona->Insert(indice, objPersona);
	}
}
void GestorPersona::EliminarPersona(String^ DNI)
{
	int indice = -1;
	indice = BuscarPersonaXDNI(DNI);
	if (indice != -1)
		this->listaPersona->RemoveAt(indice);
}
List<Persona^>^ GestorPersona::BuscarPersonaXNombre(String^ nombre)
{
	if (nombre == "")
		return this->listaPersona;
	else
	{
		List<Persona^>^ listaEncontrados = gcnew List<Persona^>;
		for (int i = 0; i < this->listaPersona->Count; i++)
		{
			if (this->listaPersona[i]->nombre == nombre)
				listaEncontrados->Add(listaPersona[i]);
		}
		return listaEncontrados;
	}
}
int GestorPersona::BuscarPersonaXDNI(String^ DNI)
{
	int indice = -1;
	for (int i = 0; i < this->listaPersona->Count; i++)
	{
		if (this->listaPersona[i]->DNI == DNI)
		{
			indice = i;
			break;
		}
	}
	return indice;
}
int GestorPersona::ObtenerCantidad()
{
	return this->listaPersona->Count;
}
