#include <iostream>

using namespace std;
int main (){
	char espacio[100];
	int repeticiones=0;
	char oracion;
	
	cout<< "Ingrese una enunciado: " ;
	cin.getline(espacio,100);
	cout<<"Ingrese la letra que desea contar del enunciado: ";
	cin>> oracion;
	
	for(int i=0; espacio[i] != '\0'; i++)){
        if ( oracion == espacio[i]){
			repeticiones++;  
		}
	}
	
	cout<< "Se encontraron " <<repeticiones<< " veces la letra";
return 0;
}