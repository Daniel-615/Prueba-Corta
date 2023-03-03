#include <iostream>
#include "Propietario.cpp"
using namespace std;
class Persona: Propietario{
	private: string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	public: 
	Persona(){
	}
	Persona(string n, double c,string nom,string ape,string dir,string date,int tel) : Propietario(n,c){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		fecha_nacimiento=date;
		telefono=tel;
	}
	//Metodo agregar
	void agregar(){
		cout<<"Se han agregado los atributos correctamente\n";
	}
	//Metodo Set
	void setNit(string ni){
		nit=ni;
	}
	void setCui(double cu){
		cui=cu;
	}
	void setNombre(string n){
		nombres=n;
	}
	void setApellidos(string ap){
		apellidos=ap;
	}
	void setDireccion(string dire){
		direccion=dire;
	}
	void setDate(string da){
		fecha_nacimiento=da;
	}
	void setTel(int tel){
		telefono=tel;
	}
	//Metodo get
	 string getNit(){
        return nit;
	}
    double getcui(){
    	return cui;
    }
	string getNombres(){
        return nombres;
    }
    string getApe(){
    	return apellidos;
    }
	string getdir(){
   		return direccion;
    }
    int getTel(){
		return telefono;
    }
    //mostrar
    void mostrar(){
    cout<<"==============="<<endl;
    cout<<nit<<","<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
    }
};
