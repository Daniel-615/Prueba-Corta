#include <iostream>
#include "Persona.cpp"
using namespace std;
int main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
    int telefono;
    double cui;
    
	cout<<"Ingrese el nit: ";
    cin>>nit;
	cout<<"Ingrese los nombres: ";
    cin>>nombres;
    fflush(stdin);
	cout<<"Ingrese los apellidos: ";
    cin>>apellidos;
    cout<<"Ingrese la direccion: ";
    cin>>direccion;
    cout<<"Ingrese el telefono: ";
    fflush(stdin);
    cin>>telefono;
    cout<<"Ingrese la fecha de nacimiento: ";
    cin>>fecha_nacimiento;
	cout<<"Ingrese el cui: ";
	cin>>cui;
	
	Persona obj=Persona(nit,cui,nombres,apellidos,direccion,fecha_nacimiento,telefono);
	obj.mostrar();
	
//	cout<<"Ingrese el nuevo nit: ";
//    fflush(stdin);
//	cin>>nit;
//	obj.setNit(nit);
//    cout<<"Ingrese el cui: ";
//	obj.setCui(cui);
//	cout<<"Ingrese el nuevo nombre: ";
//	fflush(stdin);
//	obj.setNombre(nombres);
//	cout<<"Ingrese el nuevo apellido: ";
//	obj.setApellidos(apellidos);
    obj.agregar();
	
}
