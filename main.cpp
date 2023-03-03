#include <iostream>
#include "Propietario.cpp"

using namespace std;

int main() {
  string nombres, apellidos, direccion, fecha_nacimiento, nit;
  int telefono;
  double cui;

  cout << "Ingresar NIT: ";
  cin >> nit;
  cout << "Ingresar CUI: ";
  cin >> cui;
  cout << "Ingresar Nombres: ";
  cin >> nombres;
  cout << "Ingresar Apellidos: ";
  cin >> apellidos;
  cout << "Ingresar Direccion: ";
  cin >> direccion;
  cout << "Ingrese Fecha de Nacimiento: ";
  cin >> fecha_nacimiento;
  cout << "Ingresar No. Telefono: ";
  cin >> telefono; 
  //Instancias
  int opc;
  Propietario obj = Propietario(nombres, apellidos, direccion, fecha_nacimiento, telefono, nit, cui);
obj.mostrar();	
obj.agregar();
	cout << "ingrese nuevo NIT: ";
    cin >> nit;
    obj.setNit(nit);
    obj.mostrar();
    cout << "ingrese nuevo CUI: ";
    cin >> cui;
    obj.setCui(cui);
    obj.mostrar();
    cout << "ingrese nuevos Nombres: ";
    cin >> nombres;
    obj.setNombre(nombres);
    obj.mostrar();
    cout << "ingrese nuevo Apellidos: ";
    cin >> apellidos;
    obj.setApellido(apellidos);
    obj.mostrar();
    cout << "ingrese nueva Direccion: ";
	cin >> direccion;
	obj.setDireccion(direccion);
    obj.mostrar();
    cout << "ingrese nueva Fecha de nacimiento: ";
    cin >> fecha_nacimiento;
    obj.setFecha(fecha_nacimiento);
    obj.mostrar();
	cout << "ingrese nuevo Telefono: ";
    cin >> telefono;
    obj.setTelefono(telefono);
    obj.mostrar();
}
