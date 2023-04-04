#pragma once
#include <iostream>
#include "direccion.h"
using namespace std;

enum categorias_posibles { contrato, fijo };

enum Meses { Ene, Feb, Mar, Abr, May, Jun, Jul, Ago, Sep, Oct, Nov, Dic };

struct Fecha {
	int Day;
	int Month;
	int Year;

};


class TEmpleado
{
protected:
	string ci, nombre;
	string apellido;
	int edad;
	string sexo;
	categorias_posibles categoria;
	float salario;
	Fecha fecha_ingreso;
	direccion direc;

public:
	//metodos constructores y destructores
	TEmpleado();
	TEmpleado(string ci, string nombre, string apellido, int edad, string sexo, categorias_posibles categoria, float salario, Fecha fecha_ingreso);
	~TEmpleado();

	//metodos accesores get y set
	string getci() { return ci; }
	string getnombre() { return nombre; }
	string getapellido() { return apellido; }
	int getedad() { return edad; }
	string getsexo() { return sexo; }
	float getsalario() { return salario; }
	float getsalario(float _salario) { salario = _salario; }
	categorias_posibles getcategoria() { return categoria; }
	Fecha getfechaingreso() { return fecha_ingreso; }
	direccion getdireccion() { return direc; }


	void setci(string _ci) { ci = _ci; }
	void setnombre(string _nombre) { nombre = _nombre; }
	void setapellido(string _apellido) { apellido = _apellido; }
	void setedad(int _edad) { edad = _edad; }
	void setsexo(string _sexo) { sexo = _sexo; }
	void setsalario(float _salario) { salario = _salario; }
	void setcategoria(categorias_posibles _categoria) { categoria = _categoria; }
	void setfechaingreso(Fecha _fechaingreso) { fecha_ingreso = _fechaingreso; }
	void setdirec(direccion _direc) { direc = _direc; }



	// Metodos varios
	void subircategoria();
	void mostrar();


};

