#include <iostream>

using namespace std;
int main(){
	int n;
	int i,j;
	string nombres[i];
	
	cout<< "PROGRAMA PARA ORDENAR LOS NOMBRES ALFABETICAMENTE "<<endl ;
		cout<< "Ingrese la cantidad de nombres: ";
		cin>>n;
	
	cout<<"\nIngreso de los "<< n << " nombres al arreglo: "<<endl;
	for (i=0; i<n; i++){
		cout<< "Ingrese el nombre numero " <<i+1<< ":" ;
		cin>> nombres[i];
	}
	
	for (i=0; i<n-1; i++){
		for (j=i+1; j<n; j++){
			if (nombres[i]> nombres[j+1]){
			(nombres[j],nombres[j + 1]);
			}
		}
	}
	
	
	return 0;
}
