#include <iostream>

using namespace std;
int main(){
	int n;
	int i=0;
	int pares=0, impares=0;

	cout<< "Ingrese la cantidad de numeros que tendra el vector: ";
	cin>>n;
	if (n>i){
	int numeros[n];
	
	cout<<endl;
	for (int i=0; i<n; i++){
		cout<<i+1<< ". Ingrese un numero:" ;
		cin>> numeros[i];
		}
	}else {
		cout<<"Numero invalido";
	}
	cout<<endl;
	
	int numeros[n];
	
		for(int i=0;i<n;i++){
		if(numeros[i]%2==0){
			pares+=numeros[i];
		}else{
			impares+=numeros[i];
		}
		
	}
	
	cout<< "La suma de numeros pares es: "<<pares<<endl;
	cout<< "La suma de numeros impares es: "<<impares<<endl;
	
	return 0;
}
