#include <iostream>

using namespace std;

bool VectOrdenado(int numeros[], int n){
	for (int i = 0; i < n-1; i++) {
        if (numeros[i] > numeros[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main(){
	int n,i=0;
	bool ordenado;
	
	cout<< "BIENVENIDO A MI PROGRAMA "<<endl ;
	cout<< "Ingrese la cantidad de numeros que contendra el vector: ";
	cin>>n;
	int numeros[n];
	cout<<endl;
	
	cout<<"\nIngreso de "<< n << " numeros al vector: "<<endl;
	do{
		cout<<"Ingrese el "<< i+1<<".- numero: ";
		cin>>numeros[i];
		i++;
	}while(i < n);
	
	cout<<endl;
	
	ordenado=VectOrdenado(numeros,n);
	
	if(ordenado){
		cout<<"El arreglo se encuentra ordenado"<<endl;
	}else{
		cout<<"El arreglo no se encuentra ordenado"<<endl;
	}
	
	return 0;
}