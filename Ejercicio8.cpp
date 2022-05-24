//Ejerccio 8
#include <iostream>
using namespace std;

int maximo(int nmro1, int nmro2, int nmro3){
	if(nmro1>= nmro2 && nmro1>= nmro3){
			return nmro1;
	} else if (nmro2>= nmro1 && nmro2>= nmro3 ){
	
	        return nmro2;
	} else{
	return nmro3;
	}
}

	int main(){
		int nmro1, nmro2, nmro3;
		cout<<"Ingrese tres numeros: "<<endl; cin>> nmro1 >> nmro2>> nmro3;
		cout<<"El numero mayor es:  "<<maximo(nmro1,nmro2,nmro3);
		
		
		
		
		return 0;
	}
