#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	
	private : string codigo;
	private :  string puesto; 
	private : int sueldo;
	//constructor
	public :
	Empleado(){	}
	Empleado(string nom,string ape,string dir,int tel,string cod,string pue,int suel) : Persona(nom,ape,dir,tel){
		cod = codigo;
		pue = puesto;
		sueldo = suel;
	}
	
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono (int tel){telefono=tel;}
	void setCodigo(string cod){codigo = cod;}
	void setPuesto(string pue){puesto = pue;}
	void setSueldo(int suel){sueldo = suel;}
	
	
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getCodigo(){return codigo;}
	string getPuesto(){return puesto;}
	int getSueldo(){return sueldo;}
	void mostrar(){
		cout<<"__________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo<<","<<puesto<<","<<sueldo<<endl;
	}
};
