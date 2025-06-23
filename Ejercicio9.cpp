#include<iostream>
using namespace std;
int main(){
	int i ,n;
	
	cout<<"Ingrese la cantidad de numeros que contendra el vector: ";
	cin>>n;
	
	cout<<endl;
	int numeros[n];
    for (i=0; i<n; i++){
		cout<<i+1<< ". Ingrese un numero:" ;
		cin>> numeros[i];
		}
	cout<<endl;
	
	cout<< "El vector actual de numeros es: "<< endl;
	cout<<"[";
	for (i=0; i<n; i++){
	cout<<numeros[i];
	if(i<n-1){
		cout<<";";
	    }
    }
     cout<<"]";
     cout<<endl;
     
    int Cambio=numeros[n-1];
	
	for(int i=n-1;i>=1;i--){
        numeros[i]=numeros[i-1];
    }

	numeros[0]=Cambio;
	
	cout<<endl;
	cout<< "El vector con un incremento de posicion a la derecha es: "<< endl;
	cout<<"[";
	for (i=0; i<n; i++){
	cout<<numeros[i];
	if(i<n-1){
		cout<<";";
	    }
    }
     cout<<"]";
    
     
     return 0;
 }
 