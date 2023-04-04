#include "TEmpleado.h"
#include <iostream>



TEmpleado::TEmpleado() {
	ci = "";
	nombre = "";
	apellido = "";
	edad = 0;
	sexo = "masculino";
	categoria = contrato;
	salario = 0;
	fecha_ingreso.Day = 1;
	fecha_ingreso.Month = 01;
	fecha_ingreso.Year = 1900;
}



TEmpleado::TEmpleado(string _ci, string _nombre, string _apellido, int _edad, string _sexo, categorias_posibles _categoria, float _salario, Fecha _fecha_ingreso)
{
	ci = _ci;
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	sexo = _sexo;
	categoria = _categoria;
	salario = _salario;
	fecha_ingreso.Day = _fecha_ingreso.Day;
	fecha_ingreso.Month = _fecha_ingreso.Month;
	fecha_ingreso.Year = fecha_ingreso.Year;

}

TEmpleado::~TEmpleado() {

}

void TEmpleado::subircategoria() {

	if (categoria != fijo) {
		categoria = fijo;
		if (salario + 1000 > 15000) {
			salario = 15000;
		}

		else
			salario = salario + 1000;

	}
}

void TEmpleado::mostrar() {

}





