#include <iostream>

using namespace std;
int main(){
	int n,i,j;
	string nombres[100];
	string aux;
	
	cout<< "PROGRAMA PARA ORDENAR LOS NOMBRES ALFABETICAMENTE "<<endl ;
		cout<< "Ingrese la cantidad de nombres: ";
		cin>>n;
		
	
	cout<<"\nIngreso de los "<< n << " nombres al arreglo: "<<endl;
	for (i=0; i<n; i++){
		cout<< "Ingrese el nombre numero " <<i+1<< ":" ;
		cin>> nombres[i];
	}
	
	for (i=0; i<n-1; i++){
		for (j=0; j<n-i-1; j++){
			if(nombres[j]>nombres[j+1]){
				aux=nombres[j];
				nombres[j]=nombres[j+1];
				nombres[j+1]=aux;
			}
		}
	}
	
	cout<<endl;
	cout<<"Nombres ordenados alfabeticamente "<<endl;
	for(i=0; i<n; i++){
		cout<< nombres[i]<<endl;
	}
	
	return 0;
}
	
