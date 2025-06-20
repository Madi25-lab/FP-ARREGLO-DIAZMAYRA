#include <iostream>

using namespace std;
int main(){
	int n;

	cout<< "Ingrese la cantidad de numeros: ";
	cin>>n;
	int numeros[n];
	
	cout<<endl;
	for (int i=0; i<n; i++){
		cout<<i+1<< ". Ingrese un numero:" ;
		cin>> numeros[i];
	}
	cout<<endl;
	
	int mayor=numeros[0];
	int menor=numeros[0];
	
	for (int i=0; i<n; i++){
		if (numeros[i]> mayor){
			mayor=numeros[i];
			}
		if (numeros[i]< menor){
			menor=numeros[i];
		}
	}
	cout<<endl;
		
	cout<< "Menor numero en el arreglo es: "<< menor <<endl;
	cout<< "Mayor numero en el arreglo es: "<< mayor <<endl;
	
	return 0;
}
