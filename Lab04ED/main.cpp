#include"TEmpleado.h"
#include"TCiberEmpleado.h"
#include"TEmpleadoTemporal.h"
#include <iostream>
using namespace std;
#include <iostream>




int main()
{
	TEmpleado emp1;  // Se declara el objeto sin usar parentesis
	TCiberEmpleado emp2;
	TEmpleadoTemporal emp3;
	direccion dir;
	string _ci, _nombre, _apellido, _sexo, _categoria;
	categorias_posibles	_cate;
	int _edad, opc;
	float _salario;
	Fecha _fechaingreso;
	string _tarjeta;
	string _calle, _ciudad;
	int _numero;
	int _tiempo;


	do
	{

		system("cls");

		cout << "           Datos de un Empleado" << endl;
		cout << "      Seleccione la opcion a realizar\n\n";
		cout << "      1.- Introducir los Datos de un Empleado\n";
		cout << "      2.- Mostrar Datos del Empleado\n";
		cout << "      3.- Subir Categoria del Empleado\n";
		cout << "      4.- Introducir los Datos de un Ciber-Empleado\n";
		cout << "      5.- Mostrar los Datos de un Ciber-Empleado\n";
		cout << "      6.- Subir Categoria Ciber-Empleado\n";
		cout << "      7.- Introducir los Datos de un Empleado Temporal\n";
		cout << "      8.- Mostrar los Datos de un Empleado Temporal\n";
		cout << "      9.- Subir Categoria Empleado Temporal\n";
		cout << "      10- Salir";
		cout << "       \n\n\nOpcion(1-10): ";
		cin >> opc;

		switch (opc)
		{
		case 1:
			_ci = "";
			_nombre = "";

			cout << "Entre los Datos del Empleado:\n ";
			cout << "CI: \n";
			cin >> _ci;
			cout << "Nombre: \n";
			cin >> _nombre;
			cout << "Apellido: \n";
			cin >> _apellido;
			cout << "Edad:\n ";
			cin >> _edad;
			cout << "Sexo: \n";
			cin >> _sexo;
			cout << "Categoria (fijo-contrato): \n";
			cin >> _categoria;
			cout << "Salario:\n ";
			cin >> _salario;
			cout << "Fecha de Ingreso:\n ";
			cin >> _fechaingreso.Day;
			cin >> _fechaingreso.Month;
			cin >> _fechaingreso.Year;
			cout << "Direccion:\n ";
			cout << "Calle: ";
			cin >> _calle;
			cout << "Numero: ";
			cin >> _numero;
			cout << "Ciudad: ";
			cin >> _ciudad;


			emp1.setci(_ci);
			emp1.setnombre(_nombre);
			emp1.setapellido(_apellido);
			emp1.setedad(_edad);
			emp1.setsexo(_sexo);
			if (_categoria == "fijo") {
				_cate = fijo;
			}
			else {
				_cate = contrato;
			}
			emp1.setcategoria(_cate);
			emp1.setsalario(_salario);
			emp1.setfechaingreso(_fechaingreso);
			dir.setcalle(_calle);
			dir.setnumero(_numero);
			dir.setciudad(_ciudad);
			emp1.setdirec(dir);
			break;
		case 2:
			cout << "Datos del Empleado: \n";
			cout << "El Ci del empleado es: " << emp1.getci() << endl;
			cout << "El nombre del empleado es: " << emp1.getnombre() << endl;
			cout << "El apellido del empleado es: " << emp1.getapellido() << endl;
			cout << "La edad del empleado es: " << emp1.getedad() << endl;
			cout << "El sexo del empleado es: " << emp1.getsexo() << endl;
			cout << "La categoria del empleado es: ";
			if (emp1.getcategoria() == 0) {
				cout << "contrato" << endl;
			}
			else {
				cout << "fijo" << endl;
			}
			cout << "El salario del empleado es: ";
			cout << emp1.getsalario() << endl;
			cout << "La fecha de ingreso del empleado es: ";
			cout << emp1.getfechaingreso().Day << "/" << emp1.getfechaingreso().Month << "/" << emp1.getfechaingreso().Year;
			cout << endl;
			cout << "La direccion del empleado es: ";
			cout << "Calle " << emp1.getdireccion().getcalle() << " Numero " << emp1.getdireccion().getnumero() << " Ciudad " << emp1.getdireccion().getciudad();
			cout << endl;
			cout << "Oprima una tecla para salir";
			(void)getchar();
			(void)getchar();

			break;
		case 3:
			cout << "Oprima una tecla para salir";
			emp1.subircategoria();
			(void)getchar();
			(void)getchar();
			break;

		case 4:
			_ci = "";
			_nombre = "";
			cout << "Entre los Datos del Ciber-Empleado:\n ";
			cout << "CI: \n";
			cin >> _ci;
			cout << "Nombre: \n";
			cin >> _nombre;
			cout << "Apellido: \n";
			cin >> _apellido;
			cout << "Edad:\n ";
			cin >> _edad;
			cout << "Sexo: \n";
			cin >> _sexo;
			cout << "Categoria (fijo-contrato): \n";
			cin >> _categoria;
			cout << "Salario:\n ";
			cin >> _salario;
			cout << "Fecha de Ingreso:\n ";
			cin >> _fechaingreso.Day;
			cin >> _fechaingreso.Month;
			cin >> _fechaingreso.Year;
			cout << "Tarjeta:\n ";
			cin >> _tarjeta;
			emp2.setci(_ci);
			emp2.setnombre(_nombre);
			emp2.setapellido(_apellido);
			emp2.setedad(_edad);
			emp2.setsexo(_sexo);
			if (_categoria == "fijo") {
				_cate = fijo;
			}
			else {
				_cate = contrato;
			}
			emp2.setcategoria(_cate);
			emp2.setsalario(_salario);
			emp2.setfechaingreso(_fechaingreso);
			emp2.settarjeta(_tarjeta);
			break;


		case 5:
			cout << "Datos del Ciber-Empleado: \n";
			cout << "El Ci del ciberempleado es: " << emp2.getci() << endl;
			cout << "El nombre del ciberempleado es: " << emp2.getnombre() << endl;
			cout << "El apellido del ciberempleado es: " << emp2.getapellido() << endl;
			cout << "La edad del ciberempleado es: " << emp2.getedad() << endl;
			cout << "El sexo del ciberempleado es: " << emp2.getsexo() << endl;
			cout << "La categoria del empleado es: " << emp2.getcategoria() << endl;
			cout << "El salario del ciberempleado es: " << emp2.getsalario() << endl;
			cout << "La fecha de ingreso del ciberempleado es: " << emp2.getfechaingreso().Day << "/" << emp2.getfechaingreso().Month << "/" << emp2.getfechaingreso().Year << endl;
			cout << "La tarjeta del ciberempleado es: " << emp2.gettarjeta() << endl;
			cout << "Oprima una tecla para salir";
			(void)getchar();
			(void)getchar();

			break;

		case 6:
			cout << "Oprima una tecla para salir";
			emp2.subircategoria();
			(void)getchar();
			(void)getchar();

			break;

		case 7:
			_ci = "";
			_nombre = "";
			cout << "Entre los Datos del Empleado Temporal:\n ";
			cout << "CI: \n";
			cin >> _ci;
			cout << "Nombre: \n";
			cin >> _nombre;
			cout << "Apellido: \n";
			cin >> _apellido;
			cout << "Edad:\n ";
			cin >> _edad;
			cout << "Sexo: \n";
			cin >> _sexo;
			cout << "Categoria (fijo-contrato): \n";
			cin >> _categoria;
			cout << "Salario:\n ";
			cin >> _salario;
			cout << "Fecha de Ingreso:\n ";
			cin >> _fechaingreso.Day;
			cin >> _fechaingreso.Month;
			cin >> _fechaingreso.Year;
			cout << "Timpo (h):\n ";
			cin >> _tiempo;
			emp3.setci(_ci);
			emp3.setnombre(_nombre);
			emp3.setapellido(_apellido);
			emp3.setedad(_edad);
			emp3.setsexo(_sexo);
			if (_categoria == "fijo") {
				_cate = fijo;
			}
			else {
				_cate = contrato;
			}
			emp3.setcategoria(_cate);
			emp3.setsalario(_salario);
			emp3.setfechaingreso(_fechaingreso);
			emp3.setTiempo(_tiempo);
			break;


		case 8:
			cout << "Datos del Empleado Temporal: \n";
			cout << "El Ci del Empleado Temporal es: " << emp3.getci() << endl;
			cout << "El nombre del Empleado Temporal es: " << emp3.getnombre() << endl;
			cout << "El apellido del Empleado Temporal es: " << emp3.getapellido() << endl;
			cout << "La edad del Empleado Temporal es: " << emp3.getedad() << endl;
			cout << "El sexo del Empleado Temporal es: " << emp3.getsexo() << endl;
			cout << "La categoria del Empleado Temporal es: " << emp3.getcategoria() << endl;
			cout << "El salario del Empleado Temporal es: " << emp3.getsalario() << endl;
			cout << "La fecha de ingreso del Empleado Temporal es: " << emp3.getfechaingreso().Day << "/" << emp3.getfechaingreso().Month << "/" << emp3.getfechaingreso().Year << endl;
			cout << "El tiempo en horas del Empleado Temporal es: " << emp3.getTiempo() << endl;
			cout << "Oprima una tecla para salir";
			(void)getchar();
			(void)getchar();

			break;

		case 9:
			cout << "Oprima una tecla para salir";
			emp3.subircategoria();
			(void)getchar();
			(void)getchar();

			break;


		case 10:
			exit(0);
			break;

		}
	} while ((opc != 10));



	return 0;




}
