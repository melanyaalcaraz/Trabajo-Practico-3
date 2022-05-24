//Ejerccio 4
#include <iostream>
using namespace std;

	struct persona{
		int edad;
		char nombre[30];
	} p1;
	
	 void mostrarDatos();

	 void cargarDatos();
	

	int main(){
	
		cargarDatos();
		mostrarDatos();
		
		
		
	return 0;
	}
	
    void cargarDatos(){
    	
		cout<<"Ingrese su nombre:  "<<endl; cin.getline(p1.nombre,30,'\n');
		cout<<"Ingrese su edad: "<<endl; cin>> p1.edad ;
	
	}
	
	void mostrarDatos(){
		cout<<"Su nombre es:  "<<p1.nombre<<endl;
		cout<<"Su edad es: "<< p1.edad <<endl;
	}
