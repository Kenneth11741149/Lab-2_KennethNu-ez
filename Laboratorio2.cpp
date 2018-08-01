//Laboratorio #2

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::to_string;

#include <math.h>
#define PI 3.14159265


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

int ejercicio2(double sidea, double sideb, double sidec){
	//Declaration of the 3 squares of the sides of the triangles.
	double doublesidea = pow(sidea,2); 
	double doublesideb = pow(sideb,2);
	double doublesidec = pow(sidec,2);
	//Acumulator is a versatile variable*
	double acumulator;

	//Attempting to find Alpha, Beta and Gama.

	//Formulas where simplified for immediate calculation.
	//Finding Beta
	acumulator = (doublesideb - doublesidea - doublesidec)/(-2 * sidea * sidec);
	double Beta = acos (acumulator) * 180.0 / PI;
	//Finding Alpha
	acumulator = (doublesidea - doublesideb - doublesidec)/(-2 * sideb * sidec);
	double Alpha = asin (acumulator) * 180.0 / PI;
	//Finding Gama
	acumulator = (doublesidec - doublesidea - doublesideb)/ (-2 * sidea * sidec);
	double Gama = acos (acumulator) * 180.0 / PI;
		


	//Attempting to find the Area of the Triangle.

	//Finding s on the Formula de Area de Heron.
	double s = (sidea + sideb + sidec) / 2;
	//Calculating Area
	double sminusa = (s - sidea);
	double sminusb = (s - sideb);
	double sminusc = (s - sidec);
	acumulator = (s * sminusa * sminusb * sminusc);
	acumulator = sqrt(acumulator);
	
	//Printing results
	cout << "Alpha "<< Alpha << " Beta = " << Beta << " Gama = " << Gama << endl; 
	cout << "The area of the Triangle is: " << acumulator << endl;
	




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
			switch(decision){
				case 1:
					{
					cout << "Que numero desea que se le calcule el cubo?" << endl;
					int number = 0;
					cin >> number;
					ejercicio1(number);
					}
					break;
				case 2:
					{
					double sidea = 0;
					double sideb = 0;
					double sidec = 0;
					cout << "Ingrese la medida del Lado a: " << endl;
					cin >> sidea;
					cout << "Ingrese la medida del Lado b: (Hipotenusa) " << endl;
					cin >> sideb;
					cout << "Ingrese la medida del Lado c: " << endl;
					cin >> sidec;
					ejercicio2(sidea, sideb, sidec);
					}
					break;
				case 3:
					{

					}
					break;
			} //Fin del Switch case.



			
			
		} //Fin del if de validacion de decision
		cout << "Desea volver al menu[S/N]" <<endl;
		cin >> resp;
	} //Fin del while de respuesta de usuario.






	return 0;
}

