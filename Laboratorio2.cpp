//Laboratorio #2

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::to_string;
int nextImpar(int impar){
	impar += 2;
	return impar;
} //Fin del metodo nextImpar
int ejercicio1(int numero ){
	int porcualmequede = -1;
	int sumatoria = 0;
	string argumento = "";
	if( numero < 0 ){ //Validacion de numeros mayores a 0
		cout << "El numero debe ser mayor a 0" << endl;
	} else {
		for(int i = 1; i <= numero; i++){ //For de numero de veces que hara los calculos	
			cout << i <<"^3 = ";
			for(int j = 0; j < i; j++){ // for de cuantos numeros calculara
			 	int temporal = nextImpar(porcualmequede);
				porcualmequede = temporal;
				if( i - j == 1){
					argumento += to_string(temporal) + " ";
				}else{
					argumento += to_string(temporal) + " + ";
				} //fin if
				sumatoria += temporal;
			} //Fin for
			cout << argumento <<"= "<< sumatoria << endl;
			sumatoria = 0; //Reseteo de contadores y acumuladores;
			argumento = "";
		}
	}
} //Fin del metodo ejercicio1

int ejercicio2(double SideA, double SideB, double SideC){
	
	
} //Fin del metodo Ejercicio2

int main(){
	char resp = 's';
	while( resp == 'S' || resp == 's'){
		cout << "	Menu"<<endl;
		cout << "1. Ejercicio #1" <<endl;
		cout << "2. Ejercicio #2" <<endl;
		cout << "3. Ejercicio #3" <<endl;
		cout << "Ingrese el numero de su eleccion: "<<endl;
		int decision = 0;
		cin >> decision;
		if(decision < 1 || decision > 3){
			cout << "Opcion Invalida"<<endl;
		} else {
			if(decision == 1){
				cout << "Que numero desea que se le calcule el cubo?" << endl;
				int number = 0;
				cin >> number;
				ejercicio1(number);
			} else if (decision == 2){
				double SideA = 0;
				double SideB = 0;
				double SideC = 0;
				cout << "Ingrese la medida del Lado A: " << endl;
				cin >> SideA;
				cout << "Ingrese la medida del Lado B: " << endl;
				cin >> SideB;
				cout << "Ingrese la medida del Lado C: " << endl;
				cin >> SideC;
				ejercicio2(SideA, SideB, SideC);
			} else {

			} // Fin del if anidado
			
		} //Fin del if de validacion de decision
		cout << "Desea volver al menu[S/N]" <<endl;
		cin >> resp;
	} //Fin del while de respuesta de usuario.






	return 0;
}

