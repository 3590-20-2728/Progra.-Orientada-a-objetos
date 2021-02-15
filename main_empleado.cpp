#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,codigo,puesto;
	int telefono, sueldo;
	Empleado obj = Empleado();
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese codigo ";
    cin>>codigo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	cout<<"Ingrese Salario: ";
	cin>>sueldo;
	cout<<"--------------------------------------------------"<<endl;
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.setCodigo(Codigo);
    obj.setPuesto(Puesto);
    obj.setSalario(Salario);

	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
	cout<<"Codigo: "<<obj.getCodigo()<<endl;
	cout<<"Puesto: "<<obj.getPuesto()<<endl;
	cout<<"Sueldo: "<<obj.getSueldo()<<endl;

}
