#pragma once
using namespace std;
#include <iostream>

class direccion

{

protected:
	string calle, ciudad;
	int numero;


public:
	//metodos constructores y destructores
	direccion();
	direccion(string _calle, string _ciudad, int _numero);
	~direccion();

	//metodos accesores get y set
	string getcalle() { return calle; }
	string getciudad() { return ciudad; }
	int getnumero() { return numero; }

	void setcalle(string _calle) { calle = _calle; }
	void setnumero(int _numero) { numero = _numero; }
	void setciudad(string _ciudad) { ciudad = _ciudad; }

};

