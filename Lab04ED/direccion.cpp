#include "direccion.h"


direccion::direccion() {
	calle = "";
	ciudad = "";
	numero = 0;

}

direccion::direccion(string _calle, string _ciudad, int _numero) {
	calle = _calle;
	ciudad = _ciudad;
	numero = _numero;
}

direccion::	~direccion() {

}
