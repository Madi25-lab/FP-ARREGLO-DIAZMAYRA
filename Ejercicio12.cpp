#include <iostream>

using namespace std;
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
	
	return 0;
}