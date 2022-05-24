//Ejercicio 6
#include <iostream>
using namespace std;

	int funpot(int numero, int potencia){
		int num=0 , cont=0;
		
		while(cont<=potencia){
		num=numero*numero;
		cont= cont + 1;
		}
		return num;
	}
	int main(){
		int numero, potencia;
		cout<<"Introduce el numero :" <<endl; cin>>numero;
		cout<<"Introduce el exponente de la potencia :"<< endl; cin>>potencia;
		funpot(numero, potencia);
		cout<<"El resultado es :"<<funpot(numero,potencia)<<endl;
		
		return 0;
	}
