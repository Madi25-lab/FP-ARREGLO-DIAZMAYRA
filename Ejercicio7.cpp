#include<iostream>
using namespace std;
int main(){
	int n, i, aux;
	int numeros[n];
	
	cout<<"Ingrese la cantidad de numeros en el vector"<<endl;
	cin>>n;
	
	for(i=0; i<n; i++){
		cout<<i+1<<" Ingrese un numero: "<<endl;
		cin>>numeros[i];
	}
	
	cout<< "Los numeros ingresados en el vector son"<< endl;
	for(int i=0;i<n;i++){
	cout<<"["<<numeros[i]<<"]";
    }
	
	return 0;
}
