//Ejerccio 2
#include <iostream>
using namespace std;

struct fecha{
	int dia, mes, anio;
} ;

	int main(){
	fecha hoy, cumple;
		cout<<"Ingrese la fecha de hoy: "<<endl; cin>> hoy.dia >> hoy.mes>> hoy.anio;
		cout<<"Ingrese su cumpleanios:  "<<endl; cin>> cumple.dia >> cumple.mes>> cumple.anio;
		
		if(hoy.mes == cumple.mes){
		
		if(hoy.dia == cumple.dia){
			cout<<"Feliz cumpleanios!!";
		}}else{
			cout<<"Hoy no es tu cumpleanioos";
		}
		
		
		
		
		return 0;
	}
