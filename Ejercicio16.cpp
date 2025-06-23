#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;

int main(){
	int NFinal;
	char enunciado[100];
	char numeros[100];
	
	cout<<"Digite un enunciado: ";
	cin.getline(enunciado,100);
	
	int i=0,j=0;
	while(enunciado[i] != '\0'){
	if(isdigit(enunciado[i])){ 
		numeros[j] = enunciado[i];  
		j++;                    
		}
		i++;						
	}
	numeros[j] = '\0';                
	
	
	NFinal = atoi(numeros);
	NFinal = NFinal+2;
	
	cout<<"El numero final es: "<<endl;
	cout<<NFinal;
	return 0;
}
