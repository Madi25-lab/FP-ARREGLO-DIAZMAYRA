#include<iostream>

using namespace std;
int main(){
	int numero;
	int contador=0;
	
	cout<<"Ingrese un numero que contega 10 cifras: ";
	cin>>numero;
	
	while (numero != 0) {
        numero /= 10;
        contador++;
    }
	if(contador<10 || contador>10){
        cout<<"Numero incorrecto";
        }
        
        
return 0;
}