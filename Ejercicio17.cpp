#include <iostream>
using namespace std;

bool Vap(char nombresC[],char apellido[]){
	int i=0,j=0;


int main(){
	bool validacion;
	char nombresC[200];
	char apellido[100];
	
	cout<<"Digite su nombre completo:(Digitelo todo en mayuscula o miniscula): ";
	cin.getline(nombresC,200);
	cout<<"Digite el apellido a buscar: ";
	cin.getline(apellido,100);
	
	validacion = Vap(nombresC, apellido);
	
	
	return 0;
}
