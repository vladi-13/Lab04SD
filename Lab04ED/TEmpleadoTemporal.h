#pragma once
#include"TEmpleado.h"
class TEmpleadoTemporal : public TEmpleado
{
private:
	int tiempo;

public:
	//Metodos constructor y destructor
	TEmpleadoTemporal();

	~TEmpleadoTemporal();

	//otros metodos
	int getTiempo() { return tiempo; }
	void setTiempo(int _tiempo) { tiempo = _tiempo; }




};
