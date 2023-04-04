#pragma once
#include"TEmpleado.h"
class TCiberEmpleado : public TEmpleado
{
private:
	string tarjeta;

public:
	//Metodos constructor y destructor
	TCiberEmpleado();

	~TCiberEmpleado();

	//otros metodos
	string gettarjeta() { return tarjeta; }
	void settarjeta(string _tarjeta) { tarjeta = _tarjeta; }




};

