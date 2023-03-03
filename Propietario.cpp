#include <iostream>
using namespace std;
class Propietario{
	protected:
		string nit;
		double cui;
	protected: Propietario(){	
	}
	Propietario(string n,double c){
		nit=n;
		cui=c;
	}
	//Métodos Get
	void get();
	//Método Set
	void set();
	//Metodo agregar
	void agregar();
	//Metodo mostrar
	void mostar();
};
