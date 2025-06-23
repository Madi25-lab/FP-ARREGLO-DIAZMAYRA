#include<iostream>
using namespace std;

int main(){
	int num;
	int N[10];
	int contador=0;
	
	cout<<"Ingrese un numero que contega 10 cifras: ";
	cin>>num;
	
	long long numero = num;
	
	while (numero != 0) {
        numero /= 10;
        contador++;
    }
    if (contador !=10){
		cout<<"Error"<<endl;
		return 1;
	}
	
	numero=num;
	
	for(int i=9;i>=0;i--){
		N[i]=numero%10;
		numero/=10;	
	}
       
	bool Capicua = true;
	for (int i=0;i<5;i++){
    	if (N[i]!=N[10-1-i]){
    	    Capicua=false;
    	    break;
    	}
	}

	if(Capicua){
		cout<<"El numero si es capicua"<<endl;
	}else{
		cout<<"El numero no es capicua"<<endl;
	}
	
	return 0;
}