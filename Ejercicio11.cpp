#include <iostream>

using namespace std;
int main(){
	int n;
	int i=0;
	int positivos=0, negativos=0;

	cout<< "Ingrese la cantidad de numeros: ";
	cin>>n;
	if (n>i){
	int numeros[n];
	
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
		if(numeros[i]>0){
			positivos+=numeros[i];
		}else{
			negativos+=numeros[i];
		}
		
	}
	
	cout<< "La suma de numeros positivos es: "<<positivos<<endl;
	cout<< "La suma de numeros negativos es: "<<negativos<<endl;
	
	return 0;
}
