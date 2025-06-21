#include<iostream>
using namespace std;
int main(){
	int i ,n, aux;
	
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
    for (i=0; i<n/2; i++){
    	aux=numeros[i];
    	numeros[i]=numeros[n-1-i];
    	numeros[n-1-i]=aux;
    }
	cout<<endl;
	
	cout<< "El vector inverso es: "<< endl;
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
