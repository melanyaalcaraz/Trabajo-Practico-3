//Ejercicio 10
#include <iostream>
using namespace std;

void esPrimo(int numero);

	int main(){
		bool con;
		
		do{
			int num;
			cout<<"Ingrese numero: "<<endl; cin>>num;
			esPrimo(num);
			
			cout<<"Desea ingresar otro numero?"<<endl; cin>>con;
			
			if(con ==true){
				cout<<"Ingrese otro numero: "; cin>>num;
				esPrimo(num);
			cout<<"Desea ingresar otro numero?"<<endl; cin>>con;
		}} while(con ==true);
		
	return 0;
	}
	void esPrimo(int num){
		
		bool primo=true;
			for(int i= 2; i < num; i++){
				if(num / i== 0){
					primo= false;
				} 
			}
			if(primo== true){
				cout<<"El numero no es primo"<<endl;
				
			}else{
				cout<<"El numero es primo"<<endl;
		}
	}
			
